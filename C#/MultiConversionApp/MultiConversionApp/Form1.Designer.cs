/*
 Author: Craig Lawlor
 C00184465
 */
namespace MultiConversionApp
{
    partial class MultiConversion
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.heightBtn = new System.Windows.Forms.Button();
            this.temperatureBtn = new System.Windows.Forms.Button();
            this.currencyBtn = new System.Windows.Forms.Button();
            this.inputBox = new System.Windows.Forms.RichTextBox();
            this.outputBox = new System.Windows.Forms.RichTextBox();
            this.option1 = new System.Windows.Forms.RadioButton();
            this.option2 = new System.Windows.Forms.RadioButton();
            this.inputLabel = new System.Windows.Forms.Label();
            this.outputLabel = new System.Windows.Forms.Label();
            this.convertBtn = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // heightBtn
            // 
            this.heightBtn.BackColor = System.Drawing.Color.SteelBlue;
            this.heightBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.5F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.heightBtn.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.heightBtn.Location = new System.Drawing.Point(70, 13);
            this.heightBtn.Name = "heightBtn";
            this.heightBtn.Size = new System.Drawing.Size(91, 33);
            this.heightBtn.TabIndex = 0;
            this.heightBtn.Text = "Height";
            this.heightBtn.UseVisualStyleBackColor = false;
            this.heightBtn.Click += new System.EventHandler(this.heightBtn_Click);
            // 
            // temperatureBtn
            // 
            this.temperatureBtn.BackColor = System.Drawing.Color.SteelBlue;
            this.temperatureBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.5F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.temperatureBtn.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.temperatureBtn.Location = new System.Drawing.Point(326, 13);
            this.temperatureBtn.Name = "temperatureBtn";
            this.temperatureBtn.Size = new System.Drawing.Size(95, 33);
            this.temperatureBtn.TabIndex = 1;
            this.temperatureBtn.Text = "Temperature";
            this.temperatureBtn.UseVisualStyleBackColor = false;
            this.temperatureBtn.Click += new System.EventHandler(this.temperatureBtn_Click);
            // 
            // currencyBtn
            // 
            this.currencyBtn.BackColor = System.Drawing.Color.SteelBlue;
            this.currencyBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.5F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.currencyBtn.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.currencyBtn.Location = new System.Drawing.Point(198, 13);
            this.currencyBtn.Name = "currencyBtn";
            this.currencyBtn.Size = new System.Drawing.Size(85, 33);
            this.currencyBtn.TabIndex = 2;
            this.currencyBtn.Text = "Currency";
            this.currencyBtn.UseVisualStyleBackColor = false;
            this.currencyBtn.Click += new System.EventHandler(this.currencyBtn_Click);
            // 
            // inputBox
            // 
            this.inputBox.BackColor = System.Drawing.Color.SkyBlue;
            this.inputBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.inputBox.ForeColor = System.Drawing.Color.MidnightBlue;
            this.inputBox.Location = new System.Drawing.Point(182, 192);
            this.inputBox.Name = "inputBox";
            this.inputBox.Size = new System.Drawing.Size(126, 31);
            this.inputBox.TabIndex = 3;
            this.inputBox.Text = "";
            // 
            // outputBox
            // 
            this.outputBox.BackColor = System.Drawing.Color.SkyBlue;
            this.outputBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.outputBox.ForeColor = System.Drawing.Color.MidnightBlue;
            this.outputBox.Location = new System.Drawing.Point(182, 251);
            this.outputBox.Name = "outputBox";
            this.outputBox.Size = new System.Drawing.Size(126, 31);
            this.outputBox.TabIndex = 4;
            this.outputBox.Text = "";
            // 
            // option1
            // 
            this.option1.AutoSize = true;
            this.option1.BackColor = System.Drawing.Color.PowderBlue;
            this.option1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.option1.ForeColor = System.Drawing.Color.MidnightBlue;
            this.option1.Location = new System.Drawing.Point(184, 100);
            this.option1.Name = "option1";
            this.option1.Size = new System.Drawing.Size(14, 13);
            this.option1.TabIndex = 5;
            this.option1.TabStop = true;
            this.option1.UseVisualStyleBackColor = false;
            // 
            // option2
            // 
            this.option2.AutoSize = true;
            this.option2.BackColor = System.Drawing.Color.PowderBlue;
            this.option2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.option2.ForeColor = System.Drawing.Color.MidnightBlue;
            this.option2.Location = new System.Drawing.Point(184, 130);
            this.option2.Name = "option2";
            this.option2.Size = new System.Drawing.Size(14, 13);
            this.option2.TabIndex = 6;
            this.option2.TabStop = true;
            this.option2.UseVisualStyleBackColor = false;
            // 
            // inputLabel
            // 
            this.inputLabel.AutoSize = true;
            this.inputLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.inputLabel.ForeColor = System.Drawing.Color.MidnightBlue;
            this.inputLabel.Location = new System.Drawing.Point(323, 195);
            this.inputLabel.Name = "inputLabel";
            this.inputLabel.Size = new System.Drawing.Size(0, 20);
            this.inputLabel.TabIndex = 7;
            // 
            // outputLabel
            // 
            this.outputLabel.AutoSize = true;
            this.outputLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.outputLabel.ForeColor = System.Drawing.Color.MidnightBlue;
            this.outputLabel.Location = new System.Drawing.Point(323, 254);
            this.outputLabel.Name = "outputLabel";
            this.outputLabel.Size = new System.Drawing.Size(0, 20);
            this.outputLabel.TabIndex = 8;
            // 
            // convertBtn
            // 
            this.convertBtn.BackColor = System.Drawing.Color.SteelBlue;
            this.convertBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.5F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.convertBtn.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.convertBtn.Location = new System.Drawing.Point(198, 300);
            this.convertBtn.Name = "convertBtn";
            this.convertBtn.Size = new System.Drawing.Size(85, 33);
            this.convertBtn.TabIndex = 9;
            this.convertBtn.Text = "Convert";
            this.convertBtn.UseVisualStyleBackColor = false;
            this.convertBtn.Click += new System.EventHandler(this.convertBtn_Click);
            // 
            // MultiConversion
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.PowderBlue;
            this.ClientSize = new System.Drawing.Size(476, 346);
            this.Controls.Add(this.convertBtn);
            this.Controls.Add(this.outputLabel);
            this.Controls.Add(this.inputLabel);
            this.Controls.Add(this.option2);
            this.Controls.Add(this.option1);
            this.Controls.Add(this.outputBox);
            this.Controls.Add(this.inputBox);
            this.Controls.Add(this.currencyBtn);
            this.Controls.Add(this.temperatureBtn);
            this.Controls.Add(this.heightBtn);
            this.ForeColor = System.Drawing.Color.MidnightBlue;
            this.Name = "MultiConversion";
            this.Text = "Multi-Conversion Application";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button heightBtn;
        private System.Windows.Forms.Button temperatureBtn;
        private System.Windows.Forms.Button currencyBtn;
        private System.Windows.Forms.RichTextBox inputBox;
        private System.Windows.Forms.RichTextBox outputBox;
        private System.Windows.Forms.RadioButton option1;
        private System.Windows.Forms.RadioButton option2;
        private System.Windows.Forms.Label inputLabel;
        private System.Windows.Forms.Label outputLabel;
        private System.Windows.Forms.Button convertBtn;
    }
}

