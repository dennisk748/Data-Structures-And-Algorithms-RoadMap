
function PrintAllTheNumbersThenEachPairOfSums(array) {
    
    console.log('Here are all the elements in the array');
    array.forEach(function(array) {
        console.log(array);
    });

    console.log('And here are their sums :');
    array.forEach(function(firstNumber) {
        array.forEach(function(secondNumber) {
            console.log(firstNumber + secondNumber);
        });
    });
}

PrintAllTheNumbersThenEachPairOfSums([1,2,3,4,5]);

/**
 * The BIG OH of this function is O(n + n²)
 * 
 * But according to rule 4 we drop all the non-dominant terms
 * so O(n²) 
*/