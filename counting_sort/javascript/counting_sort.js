var array = prompt("Enter your comma seperated array").split(",");

alert("Array before sorting: " + array)

len = array.length;
min = Math.min(...array);
max = Math.max(...array);

count = [];

for(i = min; i <= max; i++) {
  count[i] = 0;
}

for(i = 0; i < len; i++) {
  count[array[i]]++;
}

index = 0

for (i = min; i <= max; i++) {
  while (count[i] > 0) {
    array[index] = i;
    index++;
    count[i]--;
  }
}

alert("Array after sorting: " + array);
