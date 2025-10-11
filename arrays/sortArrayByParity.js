function sortArrayByParity(arr){
    let x=0;
    for(let i=0;i<arr.length;i++){
        if(arr[i]%2==0){
            let temp = arr[x];
            arr[x] = arr[i];
            arr[i] = temp;
            
            x++;
        }
    }
    return arr
}

console.log(sortArrayByParity([3,1,2,4]));
