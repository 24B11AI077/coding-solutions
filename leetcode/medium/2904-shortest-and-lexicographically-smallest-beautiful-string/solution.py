class Solution:
    def shortestBeautifulSubstring(self, s: str, k: int) -> str:
        mp = {'1':0,'0':0}
        mini =  s
        length = len(s)
        i = 0
        for j in range(len(s)):
            mp[s[j]] += 1
            # if mp['1'] == k:
            #     temp = s[i:j+1]
            #     if len(temp) < length:
            #         length = len(temp)
            #         mini = temp
            #     elif len(temp) == length :
            #         mini = min(mini,temp)
            #     else :
            #         continue
            
            if mp['1'] >= k:
                while i < j and mp['1'] >= k:
                    if mp['1'] == k :
                        if len(s[i:j+1]) < length:
                            mini = s[i:j+1]
                            length = len(s[i:j+1])
                        elif len(s[i:j+1]) == length:
                            mini = min(mini,s[i:j+1])
                    
                    mp[s[i]]-=1
                    i += 1
            
        if '1' not in mini or mini.count('1') != k:
            return ""          
        return mini