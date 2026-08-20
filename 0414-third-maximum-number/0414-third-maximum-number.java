class Solution {
    public int thirdMax(int[] nums) {
        List<Integer> list=Arrays.stream(nums).boxed().distinct().sorted().collect(Collectors.toList());

        if (list.size() < 3) {
            return list.get(list.size()-1);
        }

        return list.get(list.size()-3);

    }
}