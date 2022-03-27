"""Solution using hashtable is less efficient as compared to if-else implementation, see that solution for reference"""
class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack = []
        compliments = {')': '(', ']': '[', '}': '{'}
        for char in s:
            #if character is a starting bracket, add to stack
            if char == '(' or char == '[' or char == '{':
                stack.append(char)
            #if character is an ending bracket, remove starting from stack
            else: 
                if len(stack) == 0:
                    return False
                if stack[-1] == compliments[char]:
                    stack.pop()
                else:
                    return False                        
        if len(stack) == 0:
            return True
        