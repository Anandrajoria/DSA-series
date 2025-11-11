function peakElement(arr){
    let n=arr.length;

    for(let i=0;i<n;i++){
        let left=i===0?-Infinity:arr[i-1]
        let right=i===n-1?-Infinity:arr[i+1]

        if(arr[i]>=left && arr[i]>=right){
            return i
        }
    }
    return -1;
}
console.log(peakElement([1,2,3,4,5]));


//optimal solution

function peak(arr){
    let n=arr.length
    let low=0;high=n-1;

    while(low<high){
        let mid=low+(high-low)/2

        if(arr[mid]<arr[mid+1]){
            low=mid+1
        }else
        high=mid
    }
    return low;
}

console.log(peak([1,2,3,4,5]))