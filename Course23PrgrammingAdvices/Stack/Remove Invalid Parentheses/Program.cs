
class Program
{
    static string RemoveInvalidParentheses(string s)
    {
        Stack<int> stack = new Stack<int>();
        HashSet<int> invalidIndices = new HashSet<int>();


        for (int i = 0; i < s.Length; i++)
        {
            if (s[i] == '(')
            {
                stack.Push(i);
            }
            else if (s[i] == ')')
            {
                if (stack.Count == 0)
                {
                    invalidIndices.Add(i);
                }
                else
                {
                    stack.Pop();
                }
            }
        }


        while (stack.Count > 0)
        {
            invalidIndices.Add(stack.Pop());
        }


        char[] result = new char[s.Length - invalidIndices.Count];
        int index = 0;
        for (int i = 0; i < s.Length; i++)
        {
            if (!invalidIndices.Contains(i))
            {
                result[index++] = s[i];
            }
        }


        return new string(result);
    }


    static void Main()
    {
        Console.WriteLine(RemoveInvalidParentheses("(()))")); // Output: "(())" or "()"
        Console.ReadKey();
    }
}