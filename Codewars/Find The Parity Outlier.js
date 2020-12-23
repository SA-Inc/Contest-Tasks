// https://www.codewars.com/kata/5526fc09a1bbd946250002dc

const isEven = (num) => num % 2 === 0 ? true : false;

const findOutlier = (integers) => {
  let oddsCounter = 0;
  let evenCounter = 0;
  let odd = null;
  let even = null;
  
  for(let i = 0; i < integers.length; i++) {
    if(isEven(integers[i]) === true) {
      evenCounter++;
      even = integers[i];
    } else {
      oddsCounter++;
      odd = integers[i];
    }
       
    if(oddsCounter === 1 && evenCounter >= 2) {
      return odd;
    }
    
    
    if(evenCounter === 1 && oddsCounter >= 2) {
      return even;
    }
  }
}
