#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <map>
#include "iterator"
#include "locale.h"
#include <math.h>

namespace p_form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;


	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::ListBox^  listBox4;

	protected:

	protected:

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Выбрать файлы";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Multiselect = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(206, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 59);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Очистить память";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(17, 83);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(316, 28);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Рубрицировать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(367, 350);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(321, 26);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Построить график";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 19);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Количество рубрик";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(190, 19);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Список выбранных статей";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 350);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(204, 19);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Индекс качества рубрикации";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(363, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 19);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Рубрики";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 19;
			this->listBox2->Location = System::Drawing::Point(17, 146);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(321, 194);
			this->listBox2->TabIndex = 12;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(719, 36);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(359, 314);
			this->chart1->TabIndex = 13;
			this->chart1->Text = L"chart1";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 19;
			this->listBox1->Location = System::Drawing::Point(159, 52);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(41, 23);
			this->listBox1->TabIndex = 2;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 19;
			this->listBox3->Location = System::Drawing::Point(367, 34);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(321, 308);
			this->listBox3->TabIndex = 14;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 19;
			this->listBox4->Location = System::Drawing::Point(230, 350);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(115, 23);
			this->listBox4->TabIndex = 15;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 634);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Автоматический рубрикатор научных статей";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		openFileDialog1->ShowDialog();
		if (openFileDialog1->FileName == nullptr) return;
		int FileCounter = 0;
		for each (String^ file in openFileDialog1->FileNames)   //FileNames - массив строк
		{
			String ^orig1 = gcnew String(openFileDialog1->FileNames[FileCounter]);
			//Тут код обработки содержимого файла, например:
			listBox2->Items->Add(Convert::ToString(openFileDialog1->FileNames[FileCounter]));
			//Выводит в listBox1 строки с именами файлов
			FileCounter++;//переставляем счетчик массива вперед
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		listBox1->Items->Clear();
		listBox2->Items->Clear();
		listBox3->Items->Clear();
		listBox4->Items->Clear();
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	int k = 2;
	int WC1 = 0; int WC2 = 0; int q = 0;

	setlocale(LC_ALL, "RUS");

	string item;
	// Map - хранит пару <слово - частота>
	map <string, int> word_count1;
	map <string, int> word_count2;
	map <string, int> word_count3;

	// Пока не конец файла
	while (!inFile1.eof()) {
		inFile1 >> item; // Считать очередное слово
		if (word_count1.find(item) == word_count1.end()) {
			// Если его нет - записать, установить частоту в 1
			word_count1[item] = 1; WC1++;
		}
		else {
			// Иначе увеличить частоту
			word_count1[item] = word_count1[item] + 1;
		}
	}
	while (!inFile2.eof()) {
		inFile2 >> item; // Считать очередное слово
		if (word_count2.find(item) == word_count2.end()) {
			// Если его нет - записать, установить частоту в 1
			word_count2[item] = 1; WC2++;
		}
		else {
			// Иначе увеличить частоту
			word_count2[item] = word_count2[item] + 1;
		}
	}
	// Maximum number of iterations
	MAX_ITER = 100

		// Number of data points
		n = len(df)

		// Fuzzy parameter
		m = 2.00

		void function accuracy(cluster_labels, class_labels) :
		county = [0, 0]
		countn = [0, 0]
		tp = [0, 0]
		tn = [0, 0]
		fp = [0, 0]
		fn = [0, 0]

		for i in range(len(df)) :
			//Yes = 1, No = 0
			if cluster_labels[i] == 1 and class_labels[i] == 'Yes' :
				tp[0] = tp[0] + 1
				if cluster_labels[i] == 0 and class_labels[i] == 'No' :
					tn[0] = tn[0] + 1
					if cluster_labels[i] == 1 and class_labels[i] == 'No' :
						fp[0] = fp[0] + 1
						if cluster_labels[i] == 0 and class_labels[i] == 'Yes' :
							fn[0] = fn[0] + 1

							for i in range(len(df)) :
								# Yes = 0, No = 1
								if cluster_labels[i] == 0 and class_labels[i] == 'Yes':
	tp[1] = tp[1] + 1
		if cluster_labels[i] == 1 and class_labels[i] == 'No' :
			tn[1] = tn[1] + 1
			if cluster_labels[i] == 0 and class_labels[i] == 'No' :
				fp[1] = fp[1] + 1
				if cluster_labels[i] == 1 and class_labels[i] == 'Yes' :
					fn[1] = fn[1] + 1

					a0 = float((tp[0] + tn[0])) / (tp[0] + tn[0] + fn[0] + fp[0])
					a1 = float((tp[1] + tn[1])) / (tp[1] + tn[1] + fn[1] + fp[1])
					p0 = float(tp[0]) / (tp[0] + fp[0])
					p1 = float(tp[1]) / (tp[1] + fp[1])
					r0 = float(tp[0]) / (tp[0] + fn[0])
					r1 = float(tp[1]) / (tp[1] + fn[1])

					accuracy = [a0 * 100, a1 * 100]
					precision = [p0 * 100, p1 * 100]
					recall = [r0 * 100, r1 * 100]

					return accuracy, precision, recall


					void function initializeMembershipMatrix() :
					membership_mat = list()
					for i in range(n) :
						random_num_list = [random.random() for i in range(k)]
						summation = sum(random_num_list)
						temp_list = [x / summation for x in random_num_list]
						membership_mat.append(temp_list)
						return membership_mat


						void function calculateClusterCenter(membership_mat) :
						cluster_mem_val = zip(*membership_mat)
						cluster_centers = list()
						for j in range(k) :
							x = list(cluster_mem_val[j])
							xraised = [e ** m for e in x]
							denominator = sum(xraised)
							temp_num = list()
							for i in range(n) :
								data_point = list(df.iloc[i])
								prod = [xraised[i] * val for val in data_point]
								temp_num.append(prod)
								numerator = map(sum, zip(*temp_num))
								center = [z / denominator for z in numerator]
								cluster_centers.append(center)
								return cluster_centers


								void function updateMembershipValue(membership_mat, cluster_centers) :
								p = float(2 / (m - 1))
								for i in range(n) :
									x = list(df.iloc[i])
									distances = [np.linalg.norm(map(operator.sub, x, cluster_centers[j])) for j in range(k)]
									for j in range(k) :
										den = sum([math.pow(float(distances[j] / distances[c]), p) for c in range(k)])
										membership_mat[i][j] = float(1 / den)
										return membership_mat


										void function getClusters(membership_mat) :
										cluster_labels = list()
										for i in range(n) :
											max_val, idx = max((val, idx) for (idx, val) in enumerate(membership_mat[i]))
											cluster_labels.append(idx)
											return cluster_labels


											void function fuzzyCMeansClustering() :
											// Membership Matrix
											membership_mat = initializeMembershipMatrix()
											curr = 0
											while curr <= MAX_ITER :
												cluster_centers = calculateClusterCenter(membership_mat)
												membership_mat = updateMembershipValue(membership_mat, cluster_centers)
												cluster_labels = getClusters(membership_mat)
												curr += 1
												print(membership_mat)
												return cluster_labels, cluster_centers


												labels, centers = fuzzyCMeansClustering()
												a, p, r = accuracy(labels, class_labels)




}
};
}
