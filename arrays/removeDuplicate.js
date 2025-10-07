function removeDuplicate(nums){
    if(nums.length<2) return nums;

    let x=0;
    for(let i=0;i<nums.length;i++){
        if(nums[i]>nums[x]){
            x=x+1;
            nums[x]=nums[i];
        }
    }
    return x+1;
}

let nums=[0,0,1,1,1,2,2,3,3,4]
console.log(nums.slice(0,removeDuplicate(nums)))
// console.log(removeDuplicate(nums));
