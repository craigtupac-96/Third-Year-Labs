/*
 Author: Craig Lawlor
 C00184465
 Description: Calculator
*/

using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Calculator
{
    public partial class Calculator : Form
    {
        float num1;
        String number2;
        float num2;
        float total;
        Boolean firstOperator = true;
        String operatorSelected;
        Boolean numOn = true;
        String clearValue = "";
        Boolean secondOperator;
        String theSecondOperator;

        public Calculator()
        {
            InitializeComponent();
        }

        private void MyForm(object sender, EventArgs e)
        {
            
        }

        private void btn1_Click(object sender, EventArgs e)
        {
            if (numOn) {
                this.resultBox.Text += "1";
                if (!firstOperator)
                {
                    number2 += "1";
                }
            }
            
        }

        private void btn2_Click(object sender, EventArgs e)
        {
            if (numOn)
            {
                this.resultBox.Text += "2";
                if (!firstOperator)
                {
                    number2 += "2";
                }
            }
        }

        private void btn3_Click(object sender, EventArgs e)
        {
            if (numOn)
            {
                this.resultBox.Text += "3";
                if (!firstOperator)
                {
                    number2 += "3";
                }
            }
        }

        private void btn4_Click(object sender, EventArgs e)
        {
            if (numOn)
            {
                this.resultBox.Text += "4";
                if (!firstOperator)
                {
                    number2 += "4";
                }
            }
        }

        private void btn5_Click(object sender, EventArgs e)
        {
            if (numOn)
            {
                this.resultBox.Text += "5";
                if (!firstOperator)
                {
                    number2 += "5";
                }
            }
        }

        private void btn6_Click(object sender, EventArgs e)
        {
            if (numOn)
            {
                this.resultBox.Text += "6";
                if (!firstOperator)
                {
                    number2 += "6";
                }
            }
        }

        private void btn7_Click(object sender, EventArgs e)
        {
            if (numOn)
            {
                this.resultBox.Text += "7";
                if (!firstOperator)
                {
                    number2 += "7";
                }
            }
        }

        private void btn8_Click(object sender, EventArgs e)
        {
            if (numOn)
            {
                this.resultBox.Text += "8";
                if (!firstOperator)
                {
                    number2 += "8";
                }
            }
        }

        private void btn9_Click(object sender, EventArgs e)
        {
            if (numOn)
            {
                this.resultBox.Text += "9";
                if (!firstOperator)
                {
                    number2 += "9";
                }
            }
        }

        private void btn0_Click(object sender, EventArgs e)
        {
            if (numOn)
            {
                this.resultBox.Text += "0";
                if (!firstOperator)
                {
                    number2 += "0";
                }
            }
        }

        private void btnEquals_Click(object sender, EventArgs e)
        {
            if (number2 != "" && this.resultBox.Text != "") {
                num2 = float.Parse(number2);
                secondOperator = false;
                calculate(num1, num2, operatorSelected, secondOperator);
            }
        }

        private void btnPlus_Click(object sender, EventArgs e)
        {
            if (firstOperator && this.resultBox.Text != "") {
                num1 = float.Parse(resultBox.Text);
                this.resultBox.Text += "+";
                operatorSelected = "+";
                firstOperator = false;
                numOn = true;
                clearValue = this.resultBox.Text;
            }
            else if (!firstOperator && number2 != "")
            {
                secondOperator = true;
                theSecondOperator = "+";
                num2 = float.Parse(number2);
                calculate(num1, num2, operatorSelected, secondOperator);
            }
            if (this.resultBox.Text != "") {
                char op = this.resultBox.Text[this.resultBox.Text.Length - 1];
                if (op == '-' || op == '*' || op == '/')
                {
                    this.resultBox.Text = this.resultBox.Text.Remove(this.resultBox.Text.Length - 1);
                    num1 = float.Parse(resultBox.Text);
                    this.resultBox.Text += "+";
                    operatorSelected = "+";
                    firstOperator = false;
                    numOn = true;
                    clearValue = this.resultBox.Text;
                }
            }
        }

        private void btnMin_Click(object sender, EventArgs e)
        {
            if (firstOperator && this.resultBox.Text != "")
            {
                num1 = float.Parse(resultBox.Text);
                this.resultBox.Text += "-";
                operatorSelected = "-";
                firstOperator = false;
                numOn = true;
                clearValue = this.resultBox.Text;
            }
            else if (!firstOperator && number2 != "")
            {
                secondOperator = true;
                theSecondOperator = "-";
                num2 = float.Parse(number2);
                calculate(num1, num2, operatorSelected, secondOperator);
            }
            if (this.resultBox.Text != "")
            {
                char op = this.resultBox.Text[this.resultBox.Text.Length - 1];
                if (op == '+' || op == '*' || op == '/')
                {
                    this.resultBox.Text = this.resultBox.Text.Remove(this.resultBox.Text.Length - 1);
                    num1 = float.Parse(resultBox.Text);
                    this.resultBox.Text += "-";
                    operatorSelected = "-";
                    firstOperator = false;
                    numOn = true;
                    clearValue = this.resultBox.Text;
                }
            }
        }

        private void btnMult_Click(object sender, EventArgs e)
        {
            if (firstOperator && this.resultBox.Text != "")
            {
                num1 = float.Parse(resultBox.Text);
                this.resultBox.Text += "*";
                operatorSelected = "*";
                firstOperator = false;
                numOn = true;
                clearValue = this.resultBox.Text;
            }
            else if (!firstOperator && number2 != "")
            {
                secondOperator = true;
                theSecondOperator = "*";
                num2 = float.Parse(number2);
                calculate(num1, num2, operatorSelected, secondOperator);
            }
            if (this.resultBox.Text != "")
            {
                char op = this.resultBox.Text[this.resultBox.Text.Length - 1];
                if (op == '+' || op == '-' || op == '/')
                {
                    this.resultBox.Text = this.resultBox.Text.Remove(this.resultBox.Text.Length - 1);
                    num1 = float.Parse(resultBox.Text);
                    this.resultBox.Text += "*";
                    operatorSelected = "*";
                    firstOperator = false;
                    numOn = true;
                    clearValue = this.resultBox.Text;
                }
            }
        }

        private void btnDiv_Click(object sender, EventArgs e)
        {
            if (firstOperator && this.resultBox.Text != "")
            {
                num1 = float.Parse(resultBox.Text);
                this.resultBox.Text += "/";
                operatorSelected = "/";
                firstOperator = false;
                numOn = true;
                clearValue = this.resultBox.Text;
            }
            else if (!firstOperator && number2 != "")
            {
                secondOperator = true;
                theSecondOperator = "/";
                num2 = float.Parse(number2);
                calculate(num1, num2, operatorSelected, secondOperator);
            }
            if (this.resultBox.Text != "")
            {
                char op = this.resultBox.Text[this.resultBox.Text.Length - 1];
                if (op == '+' || op == '-' || op == '*')
                {
                    this.resultBox.Text = this.resultBox.Text.Remove(this.resultBox.Text.Length - 1);
                    num1 = float.Parse(resultBox.Text);
                    this.resultBox.Text += "/";
                    operatorSelected = "/";
                    firstOperator = false;
                    numOn = true;
                    clearValue = this.resultBox.Text;
                }
            }
        }

        private void btnClear_Click(object sender, EventArgs e)
        {
            this.resultBox.Text = "";
            num1 = 0;
            num2 = 0;
            number2 = "";
            total = 0;
            firstOperator = true;
            operatorSelected = "";
            numOn = true;
            clearValue = "";
        }

        private void btnClearAll_Click(object sender, EventArgs e)
        {
            this.resultBox.Text = "";
            num1 = 0;
            num2 = 0;
            number2 = "";
            total = 0;
            firstOperator = true;
            operatorSelected = "";
            numOn = true;
            clearValue = "";
        }

        private void calculate(float first, float second, String op, Boolean operator2) {
            if (op == "+") {
                total = first + second;
            }
            if (op == "-")
            {
                total = first - second;
            }
            if (op == "*")
            {
                total = first * second;
            }
            if (op == "/")
            {
                total = first / second;
            }
            if (operator2)
            {
                this.resultBox.Text = "" + total + theSecondOperator;
                numOn = true;
                firstOperator = false;
                secondOperator = false;
                operatorSelected = theSecondOperator;
            }
            else {
                this.resultBox.Text = "" + total;
                numOn = false;
                firstOperator = true;
            }
            clearValue = "";
            num1 = total;
            num2 = 0;
            number2 = "";
        }
    }
}
