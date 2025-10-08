function rotationSortedBoth(nums) {
  const n = nums.length;
  let count =0

  for (let i = 0; i < n ; i++) {
    if (nums[i] > nums[(i + 1)%n]) {
      count++;
    }
    
  }

  return count<=1
}
console.log(rotationSortedBoth([2,1,3,4]))

