class Solution:
  def maxSlidingWindow(self, nums: List[int], k:int) -> List[int]:
    output = []
    q = collections.deque()
    l = r = 0
    
    while r < len(nums):
      q.append(r)
