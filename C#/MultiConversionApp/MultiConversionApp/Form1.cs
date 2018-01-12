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

namespace MultiConversionApp
{
    public partial class MultiConversion : Form
    {
        String selected = "";
        float inch;
        float feet;
        float pound;
        float euro;
        float cel;
        float fahr;

        public MultiConversion()
        {
            InitializeComponent();
        }

        private void HeightBtn_Click(object sender, EventArgs e)
        {
            this.heightBtn.BackColor = System.Drawing.Color.White;
            this.heightBtn.ForeColor = System.Drawing.Color.SteelBlue;

            this.option1.Checked = true;
            this.option1.Text = "Inches - Feet";
            this.option2.Text = "Feet - Inches";
            this.inputLabel.Text = "";
            this.outputLabel.Text = "";

            selected = "height";
            this.temperatureBtn.BackColor = System.Drawing.Color.SteelBlue;
            this.temperatureBtn.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.currencyBtn.BackColor = System.Drawing.Color.SteelBlue;
            this.currencyBtn.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
        }

        private void CurrencyBtn_Click(object sender, EventArgs e)
        {
            this.currencyBtn.BackColor = System.Drawing.Color.White;
            this.currencyBtn.ForeColor = System.Drawing.Color.SteelBlue;

            this.option1.Checked = true;
            this.option1.Text = "Pound - Euro";
            this.option2.Text = "Euro - Pound";
            this.inputLabel.Text = "";
            this.outputLabel.Text = "";

            selected = "currency";
            this.heightBtn.BackColor = System.Drawing.Color.SteelBlue;
            this.heightBtn.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.temperatureBtn.BackColor = System.Drawing.Color.SteelBlue;
            this.temperatureBtn.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
        }

        private void TemperatureBtn_Click(object sender, EventArgs e)
        {
            this.temperatureBtn.BackColor = System.Drawing.Color.White;
            this.temperatureBtn.ForeColor = System.Drawing.Color.SteelBlue;

            this.option1.Checked = true;
            this.option1.Text = "Celcius - Fahrenheit";
            this.option2.Text = "Fahrenheit - Celcius";
            this.inputLabel.Text = "";
            this.outputLabel.Text = "";

            selected = "temperature";
            this.heightBtn.BackColor = System.Drawing.Color.SteelBlue;
            this.heightBtn.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.currencyBtn.BackColor = System.Drawing.Color.SteelBlue;
            this.currencyBtn.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
        }

        private void ConvertBtn_Click(object sender, EventArgs e)
        {
            if (selected == "height") {
                if (option1.Checked)
                {
                    this.inputLabel.Text = "Inches";
                    this.outputLabel.Text = "Feet";

                    if (ValidInput(this.inputBox.Text))
                    {
                        inch = float.Parse(this.inputBox.Text);
                        feet = inch / 12;
                        this.outputBox.Text = "" + feet;
                    }
                    else {
                        this.outputBox.Text = "Invalid input";
                    }
                    
                }
                else
                {
                    this.inputLabel.Text = "Feet";
                    this.outputLabel.Text = "Inches";

                    if (ValidInput(this.inputBox.Text))
                    {
                        feet = float.Parse(this.inputBox.Text);
                        inch = feet * 12;
                        this.outputBox.Text = "" + inch;
                    }
                    else
                    {
                        this.outputBox.Text = "Invalid input";
                    }
                }
            }
            else if (selected == "currency")
            {
                if (option1.Checked)
                {
                    this.inputLabel.Text = "Pound";
                    this.outputLabel.Text = "Euro";

                    if (ValidInput(this.inputBox.Text))
                    {
                        pound = float.Parse(this.inputBox.Text);
                        euro = pound / .79f;
                        this.outputBox.Text = "" + euro.ToString("0.00");
                    }
                    else
                    {
                        this.outputBox.Text = "Invalid input";
                    }
                }
                else
                {
                    this.inputLabel.Text = "Euro";
                    this.outputLabel.Text = "Pound";

                    if (ValidInput(this.inputBox.Text))
                    {
                        euro = float.Parse(this.inputBox.Text);
                        pound = euro * .79f;
                        this.outputBox.Text = "" + pound.ToString("0.00");
                    }
                    else
                    {
                        this.outputBox.Text = "Invalid input";
                    }
                }
            }
            else if (selected == "temperature")
            {
                if (option1.Checked)
                {
                    this.inputLabel.Text = "Celcius";
                    this.outputLabel.Text = "Fahrenheit";

                    if (ValidInput(this.inputBox.Text))
                    {
                        cel = float.Parse(this.inputBox.Text);
                        fahr = (cel * 9 / 5) + 32;
                        this.outputBox.Text = "" + fahr;
                    }
                    else
                    {
                        this.outputBox.Text = "Invalid input";
                    }
                }
                else
                {
                    this.inputLabel.Text = "Fahrenheit";
                    this.outputLabel.Text = "Celcius";

                    if (ValidInput(this.inputBox.Text))
                    {
                        fahr = float.Parse(this.inputBox.Text);
                        cel = (5f / 9f) * (fahr - 32f);
                        this.outputBox.Text = "" + cel;
                    }
                    else
                    {
                        this.outputBox.Text = "Invalid input";
                    }

                }
            }
        }

        private Boolean ValidInput(String input) {
            Boolean valid = true;
            int dotCount = 0;

            for (int i = 0; i < input.Length; i++) {
                if (input[i] == '.') {
                    dotCount++;
                }
            }
            if (dotCount > 1) {
                valid = false;
            }

            return valid;
        }
    }
}
