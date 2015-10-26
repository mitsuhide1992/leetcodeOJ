/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
  	var n = nums.length;
  	var sumO = n*(n+1)/2;
  	var sumN = 0;
  	for (var i = 0;i < n; i++) {
  		sumN += nums[i];
  	}  
  	return sumO - sumN;
};
