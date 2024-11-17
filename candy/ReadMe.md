# Problem Description
![Problem Description](assets/problem_description.bmp)

# Approach
## Step 1:
`n = ratings.size();` - as per problem description number of children = the size of the ratings array.
    
`if(n <= 1) return n;` - if there only 1 child or none i.e. n = 0 or 1, we simply return n;

Each child must have at least one candy. Therefore, it we can assume that the starting value of `result` (the return value for the number of total number of candies) can be `n`.

Using a forward pass method to solve the problem i.e. running a loop from i = 0 to i < n.
## Step 2:
For a comprehensive solution to the problem lets consider the following array:
`ratings = [3,4,5,6,6,6,5,4,3];`
In this problem there is 3 different scenerio:
1) Ratings are ascending (increasing sequence) - when the ratings of the current child `ratings[i]` is less than the next child `ratings[i+1]`. In the example above the increasing part that is from 3 to 6 i.e. indices 0 to 3 of the ratings array `[3,4,5,6, ...]`, the candy distribution will also follow an acesending pattern `[1,2,3,4, ...]` as per problem description because children with higher rating will get more candies than their neighbors.
2) Ratings remain equal - when current `ratings[i]` is equal to next child `ratings[i+1]`. In the example above from when `i = 3` this condition is encountered. For this condition no adjustment is the number of candies is needed. each children in the equal sequence should get 1 candy each until a change in the pattern of the sequence is noticed.
3) Ratings are descending (decreasing sequence) - when the current child rating `rating[i]` is greating the next child rating `rating[i+1]`.  `[...,6,5,4,3]`, for this decending series, the candy distribution that follows is `[...,4,3,2,1]`.
## Step 3:
