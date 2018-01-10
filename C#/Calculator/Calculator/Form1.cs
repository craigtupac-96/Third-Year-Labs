/*
 Author: Craig Lawlor
 C00184465
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
        bool operate = true;
        String operatorSelected;
        bool numOn = true;
        String clearValue = "";

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
                if (!operate)
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
                if (!operate)
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
                if (!operate)
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
                if (!operate)
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
                if (!operate)
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
                if (!operate)
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
                if (!operate)
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
                if (!operate)
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
                if (!operate)
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
                if (!operate)
                {
                    number2 += "0";
                }
            }
        }

        private void btnEquals_Click(object sender, EventArgs e)
        {
            if (number2 != "") {
                num2 = float.Parse(number2);
                calculate(num1, num2, operatorSelected);

                operate = true;
                num1 = total;
                num2 = 0;
                number2 = "";
            }
        }

        private void btnPlus_Click(object sender, EventArgs e)
        {
            if (operate && this.resultBox.Text != "") {
                num1 = float.Parse(resultBox.Text);
                this.resultBox.Text += "+";
                operatorSelected = "+";
                operate = false;
                numOn = true;
                clearValue = this.resultBox.Text;
            }
        }

        private void btnMin_Click(object sender, EventArgs e)
        {
            if (operate && this.resultBox.Text != "")
            {
                num1 = float.Parse(resultBox.Text);
                this.resultBox.Text += "-";
                operatorSelected = "-";
                operate = false;
                numOn = true;
                clearValue = this.resultBox.Text;
            }
        }

        private void btnMult_Click(object sender, EventArgs e)
        {
            if (operate && this.resultBox.Text != "")
            {
                num1 = float.Parse(resultBox.Text);
                this.resultBox.Text += "*";
                operatorSelected = "*";
                operate = false;
                numOn = true;
                clearValue = this.resultBox.Text;
            }
        }

        private void btnDiv_Click(object sender, EventArgs e)
        {
            if (operate && this.resultBox.Text != "")
            {
                num1 = float.Parse(resultBox.Text);
                this.resultBox.Text += "/";
                operatorSelected = "/";
                operate = false;
                numOn = true;
                clearValue = this.resultBox.Text;
            }
        }

        private void btnClear_Click(object sender, EventArgs e)
        {
            this.resultBox.Text = "";
            num1 = 0;
            num2 = 0;
            number2 = "";
            total = 0;
            operate = true;
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
            operate = true;
            operatorSelected = "";
            numOn = true;
            clearValue = "";
        }

        private void calculate(float first, float second, String op) {
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
            this.resultBox.Text = "" + total;
            clearValue = "";
            numOn = false;

        }
    }
}
