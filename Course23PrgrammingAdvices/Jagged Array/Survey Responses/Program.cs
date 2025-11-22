using System;

using System;


class Program
{
    static void Main()
    {
        string[][] surveyResponses = new string[3][];
        surveyResponses[0] = new string[] { "Yes", "No" }; // Respondent 1
        surveyResponses[1] = new string[] { "No", "Yes", "Maybe" }; // Respondent 2
        surveyResponses[2] = new string[] { "Yes" }; // Respondent 3


        Console.WriteLine("Survey Responses:");
        for (int i = 0; i < surveyResponses.Length; i++)
        {
            Console.Write($"Respondent {i + 1}: ");
            foreach (string response in surveyResponses[i])
            {
                Console.Write(response + " ");
            }
            Console.WriteLine();
        }
        Console.ReadKey();


    }
}
// Output:
// Respondent 1: Yes No
// Respondent 2: No Yes Maybe
// Respondent 3: Yes

