class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> resultStack;
    
    for (int ast : asteroids) {
        bool exploded = false;
        
        while (!resultStack.empty() && resultStack.top() > 0 && ast < 0) {
            if (resultStack.top() > -ast) {
                exploded = true;
                break;
            } else if (resultStack.top() < -ast) {
                resultStack.pop();
            } else {
                resultStack.pop();
                exploded = true;
                break;
            }
        }
        
        if (!exploded) {
            resultStack.push(ast);
        }
    }

    vector<int> result;
    while (!resultStack.empty()) {
        result.insert(result.begin(), resultStack.top());
        resultStack.pop();
    }

    return result;
        
    }
};