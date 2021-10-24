// Here we will write a simple program and try to see what happens when
// we increase the input size.

const performance = require('perf_hooks').performance; //For reading performance data

const nemo = ['nemo'];
const allCharacters = ['dory','bruce','marlin','gill','nemo',
                        'bloat','nigel','squirt','darla','hank'];
//You can increase the array size and analyze the difference in running time;
const large = new Array(100).fill('nemo'); 

function FindingNemo(array) {
    let t0 = performance.now();
    for (let i = 0; i < array.length; i++) {
        if(array[i] === 'nemo'){
            console.log('We Found Nemo');
        }
    }   
    let t1 = performance.now();
    console.log('The code took exactly ' + (t1 - t0) + ' milliseconds to complete');
}

//Insert the different arrays above to test their runningtime
FindingNemo(large); // O(n) or Linear Time
