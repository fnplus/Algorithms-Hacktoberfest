function linearSearch(unOrderedArray,searchElement){
    for(var i=0;i<unOrderedArray.length;i++){
        if(unOrderedArray[i]==searchElement){
            return i;
        };
    }
    return -1;
};

var unOrderedArray=[5,1,290,10,80,50];
var searchElement=10;
console.log(linearSearch(unOrderedArray,searchElement))
