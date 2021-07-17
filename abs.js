function sym(first,second) {
    {
      const x = first.filter(x => !second.includes(x));
      const y = second.filter(x => !first.includes(x));
     
      const difference = x.concat(y);
     
      let unique = difference.filter((item, i, ar) => ar.indexOf(item) === i);
        console.log(unique);
    }
    }
    
    sym([1, 2, 3, 3], [5, 2, 1, 4]);