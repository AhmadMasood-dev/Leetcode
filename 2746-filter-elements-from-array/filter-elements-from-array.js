/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    var array=[];
    let counter=0
for(let i=0;i<arr.length;i++){

     if (fn(arr[i],i)){
        array[counter]= arr[i]
                counter++
   }
}
return array

};