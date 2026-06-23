
class Program
{
    static bool AreDisjoint(int[] nums1, int[] nums2)
    {
        HashSet<int> set = new HashSet<int>(nums1);


        foreach (int num in nums2)
        {
            if (set.Contains(num))
                return false;
        }

        return true;
    }

    static void Main()
    {
        int[] nums1 = { 1, 2, 3 };
        int[] nums2 = { 4, 5, 6 };
        Console.WriteLine(AreDisjoint(nums1, nums2)); // Output: True
        Console.ReadKey();
    }
}
