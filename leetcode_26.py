class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        if not nums:
            return 0

        write_idx = 0

        for read_idx in range(1, len(nums)):
            if nums[read_idx] != nums[write_idx]:
                write_idx += 1
                nums[write_idx] = nums[read_idx]

        return write_idx + 1
