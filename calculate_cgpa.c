#include<stdio.h>

/**
 * @brief to determine the equivalent grade points based on the obtained marks we declared a function called calculate_grade
 * 
 * @param mark 
 * @return float 
 * 
 * 
 */
float calculate_grade(int mark) {
   if(mark >= 80)
   {
      return 4.00;
   }
   else if (mark >= 75)
   {
      return 3.75;
   }
   else if (mark >= 70)
   {
      return 3.50;
   }
   else if (mark >= 65)
   {
      return 3.25;
   }
   else if (mark >= 60)
   {
      return 3.00;
   }
   else if (mark >= 55)
   {
      return 2.75;
   }
   else if (mark >= 50)
   {
      return 2.50;
   }
   else if (mark >= 45)
   {
      return 2.25;
   }
   else if (mark >= 40)
   {
      return 2.00;
   }
   else {
      return 0.00;
   }
}

int main() {
   int n_subjects;

   printf("Enter the number of subjects : ");
   scanf("%d", &n_subjects);

   /**
    * @brief to take course code and corresponding credit as input we declare
    * two array
    * 
    * @param course_code of length n_subjects(each having length of 10 char)
    * @param credit of length n_subjects
    * 
    * 
    * 
    */
   char course_code[n_subjects][10];
   int credit[n_subjects];

   /**
    * @brief to store the obtained marks and to calculate the grade based on marks we declare two array
    * 
    * @param marks of length n_subjects
    * @param grade of length n_subjects
    * 
    * 
    * 
    */
   int marks[n_subjects];
   float grade[n_subjects];

   float total_credit = 0;

   for(int i = 0; i < n_subjects; i++) {
      printf("[%d/%d] Enter course code : ", i+1, n_subjects);
      scanf("%s", course_code[i]);

      printf("Enter the obtained marks in %s : ", course_code[i]);
      scanf("%d", &marks[i]);

      printf("Enter credit for %s : ", course_code[i]);
      scanf("%d", &credit[i]);

      total_credit += credit[i];

      /**
       * @brief to calculate total obtained grade we first need to multiply the
       * grade point of each subject with the corresponding credit
       * 
       * 
       */
      float temp = 0;
      temp = calculate_grade(marks[i]);
      temp = temp * credit[i];
      grade[i] = temp;

      printf("\n");
   }

   float total_obtained_grade = 0;

   for(int i = 0; i < n_subjects; i++) {
      total_obtained_grade += grade[i];
   }

   float cgpa;
   cgpa = total_obtained_grade/total_credit;

   printf("\nYour CGPA is : %.2f", cgpa);

   return 0;
}