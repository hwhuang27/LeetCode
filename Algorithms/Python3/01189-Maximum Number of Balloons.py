class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        balloonMap = {
            "b": 1,
            "a": 1,
            "l": 2,
            "o": 2,
            "n": 1
        }
        textMap = {            
            "b": 0,
            "a": 0,
            "l": 0,
            "o": 0,
            "n": 0
        }

        for c in text:
            if c in balloonMap:
                textMap[c] += 1
        
        maxBalloons = int(sys.maxsize)
        for key, value in textMap.items():
            maxBalloons = min(maxBalloons, int(value / balloonMap[key]))
        
        return maxBalloons

'''
    tc: O(n)
    sc: O(n)

    hash map
    b: 1
    a: 1
    l: 2
    o: 2
    n: 1

    make map for balloon
    iterate through our text string to only check chars in "balloon"
    find max number of balloons able to be created
    (minimum multiplier)

'''