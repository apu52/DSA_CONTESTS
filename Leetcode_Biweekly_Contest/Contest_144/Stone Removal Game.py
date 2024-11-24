class Solution:
    def canAliceWin(self, n: int) -> bool:
        
        if n < 10:
            return False
            
        def canWin(stones: int, isAlice: bool, prevMove: int) -> bool:
            
            currentMove = 10 if isAlice and prevMove == 0 else prevMove - 1
            
            if stones == 0 or currentMove <= 0 or currentMove > stones:
                return False
                
            
            remainingStones = stones - currentMove
            
            
            opponentCanWin = canWin(remainingStones, not isAlice, currentMove)
            
            
            return not opponentCanWin
        
        
        return canWin(n, True, 0)
