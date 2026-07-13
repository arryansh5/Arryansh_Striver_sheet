struct Item {
    int value;
    int weight;
};

class Solution {
public:
    static bool comp(Item a, Item b) {
        double r1 = (double)a.value / a.weight;
        double r2 = (double)b.value / b.weight;
        return r1 > r2;
    }

    double fractionalKnapsack(int W, vector<Item>& arr) {

        sort(arr.begin(), arr.end(), comp);

        int n = arr.size();
        int currw = 0;
        double finalvalue = 0.0;

        for (int i = 0; i < n; i++) {
            if (currw + arr[i].weight <= W) {
                currw += arr[i].weight;
                finalvalue += arr[i].value;
            } else {
                int remain = W - currw;
                finalvalue += ((double)arr[i].value / arr[i].weight) * remain;
                break;
            }
        }

        return finalvalue;
    }
};