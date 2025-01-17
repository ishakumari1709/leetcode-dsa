class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int unsatisfiedCustomers=0;
        for(int i=0;i<minutes;i++){
            unsatisfiedCustomers+=grumpy[i]*customers[i]; //multiplied because (multiplied by 0 eill result in 0 and by 1 will result in same number)
        }
        int maxUnsatisfiedCustomers=unsatisfiedCustomers;
        for(int i=minutes;i<customers.size();i++){
            unsatisfiedCustomers+=grumpy[i]*customers[i];
            unsatisfiedCustomers-=grumpy[i-minutes]*customers[i-minutes];
            maxUnsatisfiedCustomers=max(maxUnsatisfiedCustomers,unsatisfiedCustomers);
            
        }
        int maxSatisfiedCustomers=maxUnsatisfiedCustomers;
        for(int i=0;i<customers.size();i++){
            maxSatisfiedCustomers+=(1-grumpy[i])*customers[i];
        }
        return maxSatisfiedCustomers;
        
    }
};