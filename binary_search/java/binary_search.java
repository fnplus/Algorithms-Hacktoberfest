/**
* Returns index of value in values array or -1 if array doesn't contain specified element 
* @param values array with integers to search in
* @param value integer value to search in values
* @param start first index of array to search in
* @param end last index of array to search in 
*/
public int binary_search(int [] values, int value, int start, int end) {
  if(end >= 1) {
    int middle = (start+end)/2;
    if(values[middle] == value)
      return middle; 

    if (values[middle] > value) 
      return binary_search(values, value, start, middle-1); 
    else 
      return binary_search(values, value, middle+1, end);
  }

  return -1;
}
