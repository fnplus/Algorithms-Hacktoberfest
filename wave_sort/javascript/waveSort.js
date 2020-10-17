sortInWave = (arr) => {

    let newarr = [];

    // sort array
    arr.sort((a,b) => {
        return a-b;
    })
    // Swapping adjacent elements
    for (let i = 0; i < arr.length; i = i+2) {
        newarr[i] = arr[i+1];
        newarr[i+1] = arr[i];
    }

    // check odd or even if odd remove undefined value
    if (arr.length%2 != 0) {
        newarr.splice(newarr.length -2, 1)
    }

    return newarr;

}

arr = [10, 90, 49, 2, 23, 100, 89, 99];

arr = sortInWave(arr);

for (let index = 0; index < arr.length; index++) {
    console.log(arr[index]);
}