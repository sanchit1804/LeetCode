class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (head == nullptr || head->next == nullptr || head->next->next == nullptr) {
            return {-1, -1};
        }

        ListNode* left = head;
        ListNode* curr = head->next;
        ListNode* right = head->next->next;

        int position = 1;

        int firstCritical = -1;
        int previousCritical = -1;

        int minDistance = INT_MAX;
        int maxDistance = -1;

        while (right != nullptr) {
            
            if ((curr->val > left->val && curr->val > right->val) ||
                (curr->val < left->val && curr->val < right->val)) {

                if (firstCritical == -1) {
                    firstCritical = position;
                }

                if (previousCritical != -1) {
                    int distance = position - previousCritical;

                    minDistance = min(minDistance, distance);
                    maxDistance = position - firstCritical;
                }

                previousCritical = position;
            }

            left = left->next;
            curr = curr->next;
            right = right->next;

            position++;
        }

        if (maxDistance == -1) {
            return {-1, -1};
        }

        return {minDistance, maxDistance};
    }
};