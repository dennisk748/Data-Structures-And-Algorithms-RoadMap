function iterate(input) {
    for (let i = 0; i < input.length; i++) {//1 - a variable
        console.log(input[i], 'boooooooo!');    
    }
}
iterate([1,2,3,4,5,6,7]); // The size or Type of the input doesnt usually matter;

/**
 * What is the space complexity of the above program?
 * O(1)
 */


function hiNTimes(n){
    let newArray = []; // O(n) There's creation of a new data structure which's size is determined by the input
    for (let i = 0; i < n; i++) {//1 - a variable
           newArray[i] = 'hi';
           if (newArray.length > 5){
            console.log(newArray);
           }
    }
}

hiNTimes(6);

/**
 * and what is the space complexity of this program?
 * O(n + 1) : ignore the constant : O(n)
 */

/**
 * A trick question?
 * What is the running time of this?
 */

'scjsbfshdbfhsdbfksjdbfkjasduyfga'.length;

/**
 * when asked, this depends on the language you are using to find the length
 * Others might be going through the entire string to know its length
 * Here the .length is a property of strings in java script
 * so it takes constant time O(1)  
 */

