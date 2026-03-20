int removeDuplicates(int* nums, int numsSize) {
 int i=0;

 //int count=1;
 for(int j=1;j<numsSize;j++)
 {
    // int j=i+1;
    if(nums[i]!=nums[j])
    {
        i++;
    nums[i]=nums[j];
    }
    
 }
    return i+1;
}