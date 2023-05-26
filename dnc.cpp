#include<bits/stdc++.h>
using namespace std;
struct Point {
    int x, y;
};

// A utility function to find the distance between two points
float dist(Point p1, Point p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

// A Brute Force method to find the smallest distance between two points
float bruteForce(Point P[], int n) {
    float min_dist = FLT_MAX;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (dist(P[i], P[j]) < min_dist) {
                min_dist = dist(P[i], P[j]);
            }
        }
    }
    return min_dist;
}

// A utility function to find the minimum of two float values
float min(float x, float y) {
    return (x < y) ? x : y;
}

// A utility function to compare two points in the x-coordinate
int compareX(const void* a, const void* b) {
    Point *p1 = (Point *)a, *p2 = (Point *)b;
    return (p1->x - p2->x);
}

// A utility function to compare two points in the y-coordinate
int compareY(const void* a, const void* b) {
    Point *p1 = (Point *)a, *p2 = (Point *)b;
    return (p1->y - p2->y);
}

// A recursive function to find the smallest distance between two points in a given array P[] of n points
float closestUtil(Point P[], int n) {
    // If there are only two points, return their distance
    if (n == 2) {
        return dist(P[0], P[1]);
    }
    // If there are three or more points
    if (n > 2) {
        // Find the middle point
        int mid = n / 2;
        Point midPoint = P[mid];
        // Consider the vertical line passing through the middle point
        // and divide the set of points into two halves
        float dl = closestUtil(P, mid);
        float dr = closestUtil(P + mid, n - mid);
        // Find the smaller of two distances
        float d = min(dl, dr);
        // Build an array strip[] that contains points close (closer than d)
        // to the line passing through the middle point
        Point strip[n];
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (abs(P[i].x - midPoint.x) < d) {
                strip[j] = P[i];
                j++;
            }
        }
        // Find the closest points in strip[]. Return the minimum of d and closest distance in strip[]
        float closest = d;
        for (int i = 0; i < j; ++i) {
            for (int k = i + 1; k < j && (strip[k].y - strip[i].y) < closest; ++k) {
                if (dist(strip[i], strip[k]) < closest) {
                    closest = dist(strip[i], strip[k]); }
        }
    }
    return closest;
}}

// A function to find the smallest distance between two points in a given array P[] of n points
float closest(Point P[], int n) {
qsort(P, n, sizeof(Point), compareX);
return closestUtil(P, n);
}

// A function to generate n random points
Point* generatePoints(int n) {
Point* points = new Point[n];
srand(time(0));
for (int i = 0; i < n; ++i) {
points[i].x = rand() % 1000;
points[i].y = rand() % 1000;
}
return points;
}

int main() {
int num_points = 1000;
for (int i = 0; i < 10; ++i) {
// generate n random points
Point* points = generatePoints(num_points);
// measure the runtime
auto start_time = chrono::high_resolution_clock::now();
float min_dist = closest(points, num_points);
auto end_time = chrono::high_resolution_clock::now();
auto duration = chrono::duration_castchrono::microseconds(end_time - start_time);
// print the result and the runtime
cout << "Number of points: " << num_points << endl;
cout << "Smallest distance: " << min_dist << endl;
cout << "Runtime: " << duration.count() << " microseconds" << endl;
// plot the runtime
cout << "-------------------------" << endl;
num_points += 1000;
delete[] points;
}
return 0;
}