class Solution:
    def swapPairs(self, head: ListNode | None) -> ListNode | None:
        dummy = ListNode(0)
        dummy.next = head
        point = dummy

        while point.next is not None and point.next.next is not None:
            swap1 = point.next
            swap2 = point.next.next

            swap1.next = swap2.next
            swap2.next = swap1

            point.next = swap2
            point = swap1

        return dummy.next
