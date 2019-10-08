/* Function to sort using Quick Sort */
function quickSort(origArray) {
    if (origArray.length <= 1) {
        return origArray;
    } else {

        var left = [];
        var right = [];
        var newArray = [];
        var pivot = origArray.pop();
        var length = origArray.length;

        for (var i = 0; i < length; i++) {
            if (origArray[i] <= pivot) {
                left.push(origArray[i]);
            } else {
                right.push(origArray[i]);
            }
        }

        return newArray.concat(quickSort(left), pivot, quickSort(right));
    }
}

/* preDefined Array */
var myArr = [5, 4, -3, 2, 1];

/* Printing the Array */
console.log("Original array: " + myArr);
var sortedArray = quickSort(myArr);  // calling the function
console.log("Sorted array: " + sortedArray);