
class PalindromeChecker
{
    static bool IsPalindrome(string input)
    {
        Stack<char> stack = new Stack<char>();


        // Push each character of the string onto the stack
        foreach (char c in input)
        {
            stack.Push(c);
        }


        // Check if the string reads the same forward and backward
        foreach (char c in input)
        {
            if (stack.Pop() != c)
            {
                return false; // If any character doesn't match, it's not a palindrome
            }
        }


        return true;
    }


    static void Main()
    {
        string input = "madam";
        Console.WriteLine($"Is \"{input}\" a palindrome? {IsPalindrome(input)}");


        input = "hello";
        Console.WriteLine($"Is \"{input}\" a palindrome? {IsPalindrome(input)}");


        Console.ReadKey();

    }
}