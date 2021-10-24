function CompressionBoxesTwice(boxes , boxes2) { // We have two inputs which are different
    boxes.forEach(function(boxes) {//reads from boxes array
        console.log(boxes);
    });

    boxes2.forEach(function(boxes2) {//reads from boxes2 array
        console.log(boxes);
    });
}//BIG O(a + b)  NOTE : We use different terms for the different parameters to define its complexity


/* ON THE MATTER OF NESTED ARRAYS */

/**
 * QUESTION :
 * Log all pairs of arrays of [1,2,3,4,5]?
 */

const array  = ['a','b','c','d','e'];
function LogAllPairsOfArray(array) {
    for (let i = 0; i < array.length; i++) {
        for (let j = 0; j < array.length; j++) {
            console.log(array[i],array[j]);   
        }  
    }
}

LogAllPairsOfArray(array); //BIG O(n²) or O(n * n) or Quadratic Time