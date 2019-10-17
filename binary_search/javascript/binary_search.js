function binary_search(arr,element){
    var left=0;
    var right=arr.length-1;
    while(right>=left){
        var mid=Math.floor(left+(right-left)/2);
        if(arr[mid]==element)
            {return mid;}
        if(arr[mid]>element)
           { right=mid-1;}
        else
            {left=mid+1;}
        
    }
    return false;
}

var arr=[50,100,60,85,25,30,95,158,563,1000,5,9,7];
var element=60;
//binary search works on a sorted array

arr.sort((a,b)=>a-b);
binary_search(arr,element)?console.log("Data Found"):console.log("Data Not Found");