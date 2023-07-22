import math

def longestPalindrome(s: str) -> str:
        rows, cols = (len(s),len(s))
        arr = [[0 for i in range(cols)] for j in range(rows)]
        lps = ""
        start = math.floor(len(s))
        for i in range(len(s)):
            arr[i][i] = 1
            lps = s[i]


        for i in range(start,-1,-1):
            for j in range(i+1,len(s)):
                if (j-i==1):
                    if(s[i]==s[j]):
                        arr[i][j] = 1
                        print(s[i:j+1])
                        if (j-i+1>len(lps)):
                            lps = s[i:j+1]
                    else:
                        arr[i][j] = 0
                else:
                    if(s[i]==s[j] and arr[i+1][j-1] == 1):
                        arr[i][j] = 1
                        print(s[i:j+1])
                        if (j-i+1>len(lps)):
                            lps = s[i:j+1]
                    else:
                        arr[i][j] = 0
        
        for i in range(start,len(s)):
            for j in range(i+1,len(s)):
                if (j-i==1):
                    if(s[i]==s[j]):
                        arr[i][j] = 1
                        print(s[i:j+1])
                        if (j-i+1>len(lps)):
                            lps = s[i:j+1]
                    else:
                        arr[i][j] = 0
                else:
                    if(s[i]==s[j] and arr[i-1][j-1] == 1):
                        arr[i][j] = 1
                        
                        if (j-i+1>len(lps)):
                            lps = s[i:j+1]
                    else:
                        arr[i][j] = 0
        
        return lps


longestPalindrome("jglknendplocymmvwtoxvebkekzfdhykknufqdkntnqvgfbahsljkobhbxkvyictzkqjqydczuxjkgecdyhixdttxfqmgksrkyvopwprsgoszftuhawflzjyuyrujrxluhzjvbflxgcovilthvuihzttzithnsqbdxtafxrfrblulsakrahulwthhbjcslceewxfxtavljpimaqqlcbrdgtgjryjytgxljxtravwdlnrrauxplempnbfeusgtqzjtzshwieutxdytlrrqvyemlyzolhbkzhyfyttevqnfvmpqjngcnazmaagwihxrhmcibyfkccyrqwnzlzqeuenhwlzhbxqxerfifzncimwqsfatudjihtumrtjtggzleovihifxufvwqeimbxvzlxwcsknksogsbwwdlwulnetdysvsfkonggeedtshxqkgbhoscjgpiel")
