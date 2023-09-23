class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index1 = 0, index2 = 0;
        int nums3[m+n];
        for(int i=0;i<m+n;i++) {
            if (m==0 || index1>=m) {
                if (index2<n) {
                    nums3[i] = nums2[index2];
                    index2 += 1;
                }
            } else if (n==0 || index2>=n) {
                if (index1<m) {
                   nums3[i] = nums1[index1];
                   index1 += 1;
                }
            } else {
                if (nums1[index1] < nums2[index2]) {
                    nums3[i] = nums1[index1];
                    index1 += 1;
                } else {
                    nums3[i] = nums2[index2];
                    index2 += 1;
                }
            }
        }
        nums1.clear();

        for(int i=0;i<(sizeof(nums3)/sizeof(nums3[0]));i++) {
            nums1.push_back(nums3[i]);
        }
    }
};
