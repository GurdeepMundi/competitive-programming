"""solution using if-else statements"""
class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack = []
        for i in s:
            if i == '(' or i == '[' or i == '{':
                stack.append(i)
            else:
                if len(stack) == 0:
                    return False
                if i == ')':
                    if stack[-1] == '(':
                        stack.pop()
                    else:
                        return False
                elif i == ']':
                    if stack[-1] == '[':
                        stack.pop()
                    else:
                        return False
                elif i == '}':
                    if stack[-1] == '{':
                        stack.pop()
                    else:
                        return False
        if len(stack) == 0:
            return True