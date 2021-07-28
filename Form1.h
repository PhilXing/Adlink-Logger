#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::Globalization;
	using namespace System::IO;
	using namespace System::Media;
	using namespace Microsoft::Win32;

	/// <summary>
	/// Zusammenfassung for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
			RestoreSettings();
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			SaveSettings();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBoxType;
	private: System::Windows::Forms::RadioButton^ radioButtonMessage;
	private: System::Windows::Forms::RadioButton^ radioButtonMark;
	private: System::Windows::Forms::RadioButton^ radioButtonTag;
	private: System::Windows::Forms::Label^ labelProjectName;
	private: System::Windows::Forms::Label^ labelBiosVersion;
	private: System::Windows::Forms::RadioButton^ radioButtonBugFix;
	private: System::Windows::Forms::RadioButton^ radioButtonFunctionAdd;
	private: System::Windows::Forms::RadioButton^ radioButtonFunctionRemove;






	private: System::Windows::Forms::GroupBox^ groupBoxModification;
	private: System::Windows::Forms::Label^ labelIssueNumber;
	private: System::Windows::Forms::Label^ labelSummary;















	private: System::Windows::Forms::Label^ labelDescription;
	private: System::Windows::Forms::Label^ labelTestCase;
	private: System::Windows::Forms::Label^ labelModifyFiles;






	private: System::Windows::Forms::TextBox^ textBoxBiosVersion;

	private: System::Windows::Forms::TextBox^ textBoxIssueNumber;
	private: System::Windows::Forms::TextBox^ textBoxSummary;


	private: System::Windows::Forms::TextBox^ textBoxDescription;
	private: System::Windows::Forms::TextBox^ textBoxTestCase;





	private: System::Windows::Forms::TextBox^ textBoxModifyFiles;



	private: System::Windows::Forms::GroupBox^ groupBoxBiosType;
	private: System::Windows::Forms::RadioButton^ radioButtonCustomized;


	private: System::Windows::Forms::RadioButton^ radioButtonStandard;

	private: System::Windows::Forms::RadioButton^ radioButtonCrb;




	private: System::Windows::Forms::TextBox^ textBoxCustomerName;
	private: System::Windows::Forms::Label^ labelCustomerName;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Button^ buttonExport;
	private: System::Windows::Forms::Button^ buttonClipboard;
	private: System::Windows::Forms::Button^ buttonImport;


	private: System::Windows::Forms::ComboBox^ comboBoxProjectName;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;

private: System::Windows::Forms::Label^ labelAuthor;
private: System::Windows::Forms::Label^ labelDate;
private: System::Windows::Forms::Label^ labelSerialnumber;
private: System::Windows::Forms::TextBox^ textBoxAuthor;
private: System::Windows::Forms::TextBox^ textBoxDate;
private: System::Windows::Forms::TextBox^ textBoxSerialNumber;

private: System::Windows::Forms::Button^ buttonToday;
private: System::Windows::Forms::GroupBox^ groupBoxSignature;
private: System::Windows::Forms::CheckBox^ checkBoxSignature;
private: System::Windows::Forms::PictureBox^ pictureBoxAdlinkLogo;







	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->groupBoxType = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonMessage = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonMark = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonTag = (gcnew System::Windows::Forms::RadioButton());
			this->labelProjectName = (gcnew System::Windows::Forms::Label());
			this->labelBiosVersion = (gcnew System::Windows::Forms::Label());
			this->radioButtonBugFix = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFunctionAdd = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFunctionRemove = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxModification = (gcnew System::Windows::Forms::GroupBox());
			this->labelIssueNumber = (gcnew System::Windows::Forms::Label());
			this->labelSummary = (gcnew System::Windows::Forms::Label());
			this->labelDescription = (gcnew System::Windows::Forms::Label());
			this->labelTestCase = (gcnew System::Windows::Forms::Label());
			this->labelModifyFiles = (gcnew System::Windows::Forms::Label());
			this->textBoxBiosVersion = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIssueNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSummary = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDescription = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTestCase = (gcnew System::Windows::Forms::TextBox());
			this->textBoxModifyFiles = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxBiosType = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonCustomized = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonStandard = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonCrb = (gcnew System::Windows::Forms::RadioButton());
			this->textBoxCustomerName = (gcnew System::Windows::Forms::TextBox());
			this->labelCustomerName = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->textBoxAuthor = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSerialNumber = (gcnew System::Windows::Forms::TextBox());
			this->buttonExport = (gcnew System::Windows::Forms::Button());
			this->buttonClipboard = (gcnew System::Windows::Forms::Button());
			this->buttonImport = (gcnew System::Windows::Forms::Button());
			this->comboBoxProjectName = (gcnew System::Windows::Forms::ComboBox());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->labelAuthor = (gcnew System::Windows::Forms::Label());
			this->labelDate = (gcnew System::Windows::Forms::Label());
			this->labelSerialnumber = (gcnew System::Windows::Forms::Label());
			this->buttonToday = (gcnew System::Windows::Forms::Button());
			this->groupBoxSignature = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxSignature = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBoxAdlinkLogo = (gcnew System::Windows::Forms::PictureBox());
			this->groupBoxType->SuspendLayout();
			this->groupBoxModification->SuspendLayout();
			this->groupBoxBiosType->SuspendLayout();
			this->groupBoxSignature->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAdlinkLogo))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBoxType
			// 
			this->groupBoxType->Controls->Add(this->radioButtonMessage);
			this->groupBoxType->Controls->Add(this->radioButtonMark);
			this->groupBoxType->Controls->Add(this->radioButtonTag);
			this->groupBoxType->Location = System::Drawing::Point(25, 12);
			this->groupBoxType->Name = L"groupBoxType";
			this->groupBoxType->Size = System::Drawing::Size(245, 58);
			this->groupBoxType->TabIndex = 0;
			this->groupBoxType->TabStop = false;
			this->groupBoxType->Text = L"Message Type";
			// 
			// radioButtonMessage
			// 
			this->radioButtonMessage->AutoSize = true;
			this->radioButtonMessage->Checked = true;
			this->radioButtonMessage->Location = System::Drawing::Point(176, 21);
			this->radioButtonMessage->Name = L"radioButtonMessage";
			this->radioButtonMessage->Size = System::Drawing::Size(62, 16);
			this->radioButtonMessage->TabIndex = 0;
			this->radioButtonMessage->TabStop = true;
			this->radioButtonMessage->Text = L"Message";
			this->radioButtonMessage->UseVisualStyleBackColor = true;
			this->radioButtonMessage->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonMessage_CheckedChanged);
			// 
			// radioButtonMark
			// 
			this->radioButtonMark->AutoSize = true;
			this->radioButtonMark->Location = System::Drawing::Point(75, 21);
			this->radioButtonMark->Name = L"radioButtonMark";
			this->radioButtonMark->Size = System::Drawing::Size(95, 16);
			this->radioButtonMark->TabIndex = 2;
			this->radioButtonMark->Text = L"Mark in history";
			this->radioButtonMark->UseVisualStyleBackColor = true;
			this->radioButtonMark->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonMark_CheckedChanged);
			// 
			// radioButtonTag
			// 
			this->radioButtonTag->AutoSize = true;
			this->radioButtonTag->Location = System::Drawing::Point(17, 21);
			this->radioButtonTag->Name = L"radioButtonTag";
			this->radioButtonTag->Size = System::Drawing::Size(41, 16);
			this->radioButtonTag->TabIndex = 1;
			this->radioButtonTag->TabStop = true;
			this->radioButtonTag->Text = L"Tag";
			this->radioButtonTag->UseVisualStyleBackColor = true;
			this->radioButtonTag->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonTag_CheckedChanged);
			// 
			// labelProjectName
			// 
			this->labelProjectName->AutoSize = true;
			this->labelProjectName->Location = System::Drawing::Point(28, 161);
			this->labelProjectName->Name = L"labelProjectName";
			this->labelProjectName->Size = System::Drawing::Size(67, 12);
			this->labelProjectName->TabIndex = 5;
			this->labelProjectName->Text = L"Project Name";
			// 
			// labelBiosVersion
			// 
			this->labelBiosVersion->AutoSize = true;
			this->labelBiosVersion->Location = System::Drawing::Point(28, 229);
			this->labelBiosVersion->Name = L"labelBiosVersion";
			this->labelBiosVersion->Size = System::Drawing::Size(41, 12);
			this->labelBiosVersion->TabIndex = 9;
			this->labelBiosVersion->Text = L"Version";
			// 
			// radioButtonBugFix
			// 
			this->radioButtonBugFix->AutoSize = true;
			this->radioButtonBugFix->Checked = true;
			this->radioButtonBugFix->Location = System::Drawing::Point(10, 37);
			this->radioButtonBugFix->Name = L"radioButtonBugFix";
			this->radioButtonBugFix->Size = System::Drawing::Size(59, 16);
			this->radioButtonBugFix->TabIndex = 0;
			this->radioButtonBugFix->TabStop = true;
			this->radioButtonBugFix->Text = L"Bug fix";
			this->radioButtonBugFix->UseVisualStyleBackColor = true;
			// 
			// radioButtonFunctionAdd
			// 
			this->radioButtonFunctionAdd->AutoSize = true;
			this->radioButtonFunctionAdd->Location = System::Drawing::Point(69, 37);
			this->radioButtonFunctionAdd->Name = L"radioButtonFunctionAdd";
			this->radioButtonFunctionAdd->Size = System::Drawing::Size(87, 16);
			this->radioButtonFunctionAdd->TabIndex = 1;
			this->radioButtonFunctionAdd->TabStop = true;
			this->radioButtonFunctionAdd->Text = L"Function Add";
			this->radioButtonFunctionAdd->UseVisualStyleBackColor = true;
			// 
			// radioButtonFunctionRemove
			// 
			this->radioButtonFunctionRemove->AutoSize = true;
			this->radioButtonFunctionRemove->Location = System::Drawing::Point(162, 37);
			this->radioButtonFunctionRemove->Name = L"radioButtonFunctionRemove";
			this->radioButtonFunctionRemove->Size = System::Drawing::Size(106, 16);
			this->radioButtonFunctionRemove->TabIndex = 2;
			this->radioButtonFunctionRemove->TabStop = true;
			this->radioButtonFunctionRemove->Text = L"Function Remove";
			this->radioButtonFunctionRemove->UseVisualStyleBackColor = true;
			// 
			// groupBoxModification
			// 
			this->groupBoxModification->Controls->Add(this->radioButtonBugFix);
			this->groupBoxModification->Controls->Add(this->radioButtonFunctionRemove);
			this->groupBoxModification->Controls->Add(this->radioButtonFunctionAdd);
			this->groupBoxModification->Location = System::Drawing::Point(26, 277);
			this->groupBoxModification->Name = L"groupBoxModification";
			this->groupBoxModification->Size = System::Drawing::Size(280, 77);
			this->groupBoxModification->TabIndex = 11;
			this->groupBoxModification->TabStop = false;
			this->groupBoxModification->Text = L"Modification Type";
			// 
			// labelIssueNumber
			// 
			this->labelIssueNumber->AutoSize = true;
			this->labelIssueNumber->Location = System::Drawing::Point(37, 369);
			this->labelIssueNumber->Name = L"labelIssueNumber";
			this->labelIssueNumber->Size = System::Drawing::Size(34, 12);
			this->labelIssueNumber->TabIndex = 12;
			this->labelIssueNumber->Text = L"Issue#";
			// 
			// labelSummary
			// 
			this->labelSummary->AutoSize = true;
			this->labelSummary->Location = System::Drawing::Point(37, 400);
			this->labelSummary->Name = L"labelSummary";
			this->labelSummary->Size = System::Drawing::Size(50, 12);
			this->labelSummary->TabIndex = 14;
			this->labelSummary->Text = L"Summary";
			// 
			// labelDescription
			// 
			this->labelDescription->AutoSize = true;
			this->labelDescription->Location = System::Drawing::Point(310, 103);
			this->labelDescription->Name = L"labelDescription";
			this->labelDescription->Size = System::Drawing::Size(58, 12);
			this->labelDescription->TabIndex = 17;
			this->labelDescription->Text = L"Description";
			// 
			// labelTestCase
			// 
			this->labelTestCase->AutoSize = true;
			this->labelTestCase->Location = System::Drawing::Point(310, 236);
			this->labelTestCase->Name = L"labelTestCase";
			this->labelTestCase->Size = System::Drawing::Size(49, 12);
			this->labelTestCase->TabIndex = 19;
			this->labelTestCase->Text = L"Test Case";
			// 
			// labelModifyFiles
			// 
			this->labelModifyFiles->AutoSize = true;
			this->labelModifyFiles->Location = System::Drawing::Point(309, 364);
			this->labelModifyFiles->Name = L"labelModifyFiles";
			this->labelModifyFiles->Size = System::Drawing::Size(64, 12);
			this->labelModifyFiles->TabIndex = 21;
			this->labelModifyFiles->Text = L"Modify Files";
			// 
			// textBoxBiosVersion
			// 
			this->textBoxBiosVersion->Location = System::Drawing::Point(114, 226);
			this->textBoxBiosVersion->Name = L"textBoxBiosVersion";
			this->textBoxBiosVersion->Size = System::Drawing::Size(134, 22);
			this->textBoxBiosVersion->TabIndex = 10;
			this->textBoxBiosVersion->Leave += gcnew System::EventHandler(this, &Form1::textBoxBiosVersion_Leave);
			// 
			// textBoxIssueNumber
			// 
			this->textBoxIssueNumber->Location = System::Drawing::Point(114, 366);
			this->textBoxIssueNumber->Name = L"textBoxIssueNumber";
			this->textBoxIssueNumber->Size = System::Drawing::Size(134, 22);
			this->textBoxIssueNumber->TabIndex = 13;
			this->toolTip1->SetToolTip(this->textBoxIssueNumber, L"Jira #");
			// 
			// textBoxSummary
			// 
			this->textBoxSummary->Location = System::Drawing::Point(114, 397);
			this->textBoxSummary->Name = L"textBoxSummary";
			this->textBoxSummary->Size = System::Drawing::Size(134, 22);
			this->textBoxSummary->TabIndex = 15;
			this->toolTip1->SetToolTip(this->textBoxSummary, L"Might be Summary from Jira");
			// 
			// textBoxDescription
			// 
			this->textBoxDescription->Location = System::Drawing::Point(311, 118);
			this->textBoxDescription->Multiline = true;
			this->textBoxDescription->Name = L"textBoxDescription";
			this->textBoxDescription->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxDescription->Size = System::Drawing::Size(342, 106);
			this->textBoxDescription->TabIndex = 18;
			// 
			// textBoxTestCase
			// 
			this->textBoxTestCase->Location = System::Drawing::Point(310, 251);
			this->textBoxTestCase->Multiline = true;
			this->textBoxTestCase->Name = L"textBoxTestCase";
			this->textBoxTestCase->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxTestCase->Size = System::Drawing::Size(342, 106);
			this->textBoxTestCase->TabIndex = 20;
			// 
			// textBoxModifyFiles
			// 
			this->textBoxModifyFiles->Location = System::Drawing::Point(311, 379);
			this->textBoxModifyFiles->Multiline = true;
			this->textBoxModifyFiles->Name = L"textBoxModifyFiles";
			this->textBoxModifyFiles->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxModifyFiles->Size = System::Drawing::Size(342, 106);
			this->textBoxModifyFiles->TabIndex = 22;
			// 
			// groupBoxBiosType
			// 
			this->groupBoxBiosType->Controls->Add(this->radioButtonCustomized);
			this->groupBoxBiosType->Controls->Add(this->radioButtonStandard);
			this->groupBoxBiosType->Controls->Add(this->radioButtonCrb);
			this->groupBoxBiosType->Location = System::Drawing::Point(27, 77);
			this->groupBoxBiosType->Name = L"groupBoxBiosType";
			this->groupBoxBiosType->Size = System::Drawing::Size(243, 65);
			this->groupBoxBiosType->TabIndex = 1;
			this->groupBoxBiosType->TabStop = false;
			this->groupBoxBiosType->Text = L"BIOS Type";
			// 
			// radioButtonCustomized
			// 
			this->radioButtonCustomized->AutoSize = true;
			this->radioButtonCustomized->Location = System::Drawing::Point(143, 31);
			this->radioButtonCustomized->Name = L"radioButtonCustomized";
			this->radioButtonCustomized->Size = System::Drawing::Size(78, 16);
			this->radioButtonCustomized->TabIndex = 2;
			this->radioButtonCustomized->Text = L"Customized";
			this->radioButtonCustomized->UseVisualStyleBackColor = true;
			this->radioButtonCustomized->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonCustomized_CheckedChanged);
			// 
			// radioButtonStandard
			// 
			this->radioButtonStandard->AutoSize = true;
			this->radioButtonStandard->Checked = true;
			this->radioButtonStandard->Location = System::Drawing::Point(73, 31);
			this->radioButtonStandard->Name = L"radioButtonStandard";
			this->radioButtonStandard->Size = System::Drawing::Size(64, 16);
			this->radioButtonStandard->TabIndex = 1;
			this->radioButtonStandard->TabStop = true;
			this->radioButtonStandard->Text = L"Standard";
			this->radioButtonStandard->UseVisualStyleBackColor = true;
			this->radioButtonStandard->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonStandard_CheckedChanged);
			// 
			// radioButtonCrb
			// 
			this->radioButtonCrb->AutoSize = true;
			this->radioButtonCrb->Location = System::Drawing::Point(15, 31);
			this->radioButtonCrb->Name = L"radioButtonCrb";
			this->radioButtonCrb->Size = System::Drawing::Size(47, 16);
			this->radioButtonCrb->TabIndex = 0;
			this->radioButtonCrb->Text = L"CRB";
			this->radioButtonCrb->UseVisualStyleBackColor = true;
			this->radioButtonCrb->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonCrb_CheckedChanged);
			// 
			// textBoxCustomerName
			// 
			this->textBoxCustomerName->Location = System::Drawing::Point(114, 193);
			this->textBoxCustomerName->Name = L"textBoxCustomerName";
			this->textBoxCustomerName->Size = System::Drawing::Size(134, 22);
			this->textBoxCustomerName->TabIndex = 8;
			// 
			// labelCustomerName
			// 
			this->labelCustomerName->AutoSize = true;
			this->labelCustomerName->Location = System::Drawing::Point(28, 196);
			this->labelCustomerName->Name = L"labelCustomerName";
			this->labelCustomerName->Size = System::Drawing::Size(80, 12);
			this->labelCustomerName->TabIndex = 7;
			this->labelCustomerName->Text = L"Customer Name";
			// 
			// textBoxAuthor
			// 
			this->textBoxAuthor->Location = System::Drawing::Point(77, 23);
			this->textBoxAuthor->MaxLength = 2;
			this->textBoxAuthor->Name = L"textBoxAuthor";
			this->textBoxAuthor->Size = System::Drawing::Size(37, 22);
			this->textBoxAuthor->TabIndex = 1;
			this->toolTip1->SetToolTip(this->textBoxAuthor, L"XX, 2 letters\' initial of the name of the author");
			this->textBoxAuthor->TextChanged += gcnew System::EventHandler(this, &Form1::textBoxAuthor_TextChanged);
			this->textBoxAuthor->Leave += gcnew System::EventHandler(this, &Form1::textBoxAuthor_Leave);
			// 
			// textBoxDate
			// 
			this->textBoxDate->Location = System::Drawing::Point(77, 49);
			this->textBoxDate->MaxLength = 8;
			this->textBoxDate->Name = L"textBoxDate";
			this->textBoxDate->Size = System::Drawing::Size(91, 22);
			this->textBoxDate->TabIndex = 3;
			this->toolTip1->SetToolTip(this->textBoxDate, L"YYYYMMDD, date code");
			this->textBoxDate->TextChanged += gcnew System::EventHandler(this, &Form1::textBoxDate_TextChanged);
			// 
			// textBoxSerialNumber
			// 
			this->textBoxSerialNumber->Location = System::Drawing::Point(77, 76);
			this->textBoxSerialNumber->MaxLength = 2;
			this->textBoxSerialNumber->Name = L"textBoxSerialNumber";
			this->textBoxSerialNumber->Size = System::Drawing::Size(37, 22);
			this->textBoxSerialNumber->TabIndex = 6;
			this->toolTip1->SetToolTip(this->textBoxSerialNumber, L"personal daily serial number");
			this->textBoxSerialNumber->TextChanged += gcnew System::EventHandler(this, &Form1::textBoxSerialNumber_TextChanged);
			// 
			// buttonExport
			// 
			this->buttonExport->Location = System::Drawing::Point(311, 489);
			this->buttonExport->Name = L"buttonExport";
			this->buttonExport->Size = System::Drawing::Size(88, 52);
			this->buttonExport->TabIndex = 23;
			this->buttonExport->Text = L"Export";
			this->buttonExport->UseVisualStyleBackColor = true;
			this->buttonExport->Click += gcnew System::EventHandler(this, &Form1::buttonExport_Click);
			// 
			// buttonClipboard
			// 
			this->buttonClipboard->Location = System::Drawing::Point(448, 489);
			this->buttonClipboard->Name = L"buttonClipboard";
			this->buttonClipboard->Size = System::Drawing::Size(80, 52);
			this->buttonClipboard->TabIndex = 24;
			this->buttonClipboard->Text = L"Clipboard";
			this->buttonClipboard->UseVisualStyleBackColor = true;
			this->buttonClipboard->Click += gcnew System::EventHandler(this, &Form1::buttonClipboard_Click);
			// 
			// buttonImport
			// 
			this->buttonImport->Enabled = false;
			this->buttonImport->Location = System::Drawing::Point(577, 489);
			this->buttonImport->Name = L"buttonImport";
			this->buttonImport->Size = System::Drawing::Size(76, 52);
			this->buttonImport->TabIndex = 25;
			this->buttonImport->Text = L"Import";
			this->buttonImport->UseVisualStyleBackColor = true;
			// 
			// comboBoxProjectName
			// 
			this->comboBoxProjectName->FormattingEnabled = true;
			this->comboBoxProjectName->Location = System::Drawing::Point(114, 158);
			this->comboBoxProjectName->Name = L"comboBoxProjectName";
			this->comboBoxProjectName->Size = System::Drawing::Size(134, 20);
			this->comboBoxProjectName->TabIndex = 6;
			this->comboBoxProjectName->Leave += gcnew System::EventHandler(this, &Form1::comboBoxProjectName_Leave);
			// 
			// labelAuthor
			// 
			this->labelAuthor->AutoSize = true;
			this->labelAuthor->Location = System::Drawing::Point(28, 33);
			this->labelAuthor->Name = L"labelAuthor";
			this->labelAuthor->Size = System::Drawing::Size(38, 12);
			this->labelAuthor->TabIndex = 0;
			this->labelAuthor->Text = L"Author";
			// 
			// labelDate
			// 
			this->labelDate->AutoSize = true;
			this->labelDate->Location = System::Drawing::Point(30, 59);
			this->labelDate->Name = L"labelDate";
			this->labelDate->Size = System::Drawing::Size(26, 12);
			this->labelDate->TabIndex = 2;
			this->labelDate->Text = L"Date";
			// 
			// labelSerialnumber
			// 
			this->labelSerialnumber->AutoSize = true;
			this->labelSerialnumber->Location = System::Drawing::Point(28, 86);
			this->labelSerialnumber->Name = L"labelSerialnumber";
			this->labelSerialnumber->Size = System::Drawing::Size(37, 12);
			this->labelSerialnumber->TabIndex = 5;
			this->labelSerialnumber->Text = L"Serial#";
			// 
			// buttonToday
			// 
			this->buttonToday->Location = System::Drawing::Point(183, 49);
			this->buttonToday->Name = L"buttonToday";
			this->buttonToday->Size = System::Drawing::Size(47, 23);
			this->buttonToday->TabIndex = 4;
			this->buttonToday->Text = L"Today";
			this->buttonToday->UseVisualStyleBackColor = true;
			this->buttonToday->Click += gcnew System::EventHandler(this, &Form1::buttonToday_Click);
			// 
			// groupBoxSignature
			// 
			this->groupBoxSignature->Controls->Add(this->buttonToday);
			this->groupBoxSignature->Controls->Add(this->textBoxSerialNumber);
			this->groupBoxSignature->Controls->Add(this->textBoxDate);
			this->groupBoxSignature->Controls->Add(this->textBoxAuthor);
			this->groupBoxSignature->Controls->Add(this->labelSerialnumber);
			this->groupBoxSignature->Controls->Add(this->labelDate);
			this->groupBoxSignature->Controls->Add(this->labelAuthor);
			this->groupBoxSignature->Location = System::Drawing::Point(18, 447);
			this->groupBoxSignature->Name = L"groupBoxSignature";
			this->groupBoxSignature->Size = System::Drawing::Size(245, 109);
			this->groupBoxSignature->TabIndex = 16;
			this->groupBoxSignature->TabStop = false;
			this->groupBoxSignature->Text = L"Signature";
			// 
			// checkBoxSignature
			// 
			this->checkBoxSignature->AutoSize = true;
			this->checkBoxSignature->Checked = true;
			this->checkBoxSignature->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxSignature->Location = System::Drawing::Point(76, 435);
			this->checkBoxSignature->Name = L"checkBoxSignature";
			this->checkBoxSignature->Size = System::Drawing::Size(187, 16);
			this->checkBoxSignature->TabIndex = 8;
			this->checkBoxSignature->Text = L"<ADLINK-XXYYYYMMDD_ZZ>";
			this->checkBoxSignature->UseVisualStyleBackColor = true;
			this->checkBoxSignature->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBoxSignature_CheckedChanged);
			// 
			// pictureBoxAdlinkLogo
			// 
			this->pictureBoxAdlinkLogo->Location = System::Drawing::Point(310, 12);
			this->pictureBoxAdlinkLogo->Name = L"pictureBoxAdlinkLogo";
			this->pictureBoxAdlinkLogo->Size = System::Drawing::Size(341, 79);
			this->pictureBoxAdlinkLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxAdlinkLogo->TabIndex = 26;
			this->pictureBoxAdlinkLogo->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBoxAdlinkLogo, L"Click to visit Commit Message Rule page...");
			this->pictureBoxAdlinkLogo->Click += gcnew System::EventHandler(this, &Form1::pictureBoxAdlinkLogo_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(669, 568);
			this->Controls->Add(this->checkBoxSignature);
			this->Controls->Add(this->groupBoxSignature);
			this->Controls->Add(this->comboBoxProjectName);
			this->Controls->Add(this->buttonImport);
			this->Controls->Add(this->buttonClipboard);
			this->Controls->Add(this->buttonExport);
			this->Controls->Add(this->labelCustomerName);
			this->Controls->Add(this->textBoxCustomerName);
			this->Controls->Add(this->groupBoxBiosType);
			this->Controls->Add(this->textBoxModifyFiles);
			this->Controls->Add(this->textBoxTestCase);
			this->Controls->Add(this->textBoxDescription);
			this->Controls->Add(this->textBoxSummary);
			this->Controls->Add(this->textBoxIssueNumber);
			this->Controls->Add(this->textBoxBiosVersion);
			this->Controls->Add(this->labelModifyFiles);
			this->Controls->Add(this->labelTestCase);
			this->Controls->Add(this->labelDescription);
			this->Controls->Add(this->labelSummary);
			this->Controls->Add(this->labelIssueNumber);
			this->Controls->Add(this->groupBoxModification);
			this->Controls->Add(this->labelBiosVersion);
			this->Controls->Add(this->labelProjectName);
			this->Controls->Add(this->groupBoxType);
			this->Controls->Add(this->pictureBoxAdlinkLogo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Adlink Logger v0.2-2021-07-29";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->LocationChanged += gcnew System::EventHandler(this, &Form1::Form1_LocationChanged);
			this->groupBoxType->ResumeLayout(false);
			this->groupBoxType->PerformLayout();
			this->groupBoxModification->ResumeLayout(false);
			this->groupBoxModification->PerformLayout();
			this->groupBoxBiosType->ResumeLayout(false);
			this->groupBoxBiosType->PerformLayout();
			this->groupBoxSignature->ResumeLayout(false);
			this->groupBoxSignature->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAdlinkLogo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#define APP_KEY							"Logger"
#define APP_VERSION_VALUE   			"AppVersion"
#define APP_REGISTRY_VERSION			"0.2"

#define COMPANY_NAME				    "ADLink"

#define VALUE_MESSAGE_TYPE_TAG          "MessageTypeTag"
#define VALUE_MESSAGE_TYPE_MARK         "MessageTypeMark"
#define VALUE_MESSAGE_TYPE_MESSAGE      "MessageTypeMessage"
#define VALUE_BIOS_TYPE_CRB             "BiosTypeCrb"
#define VALUE_BIOS_TYPE_STANDARD        "BiosTypeStandard"
#define VALUE_BIOS_TYPE_CUSTOMIZED      "BiosTypeCustomized"
#define VALUE_PROJECT_NAME              "ProjectName"
#define VALUE_CUSTOMER_NAME				"CustomerName"
#define VALUE_BIOS_VERSION				"BiosVersion"
#define VALUE_MODIFY_TYPE_BF            "ModifyTypeBugFix"
#define VALUE_MODIFY_TYPE_FA            "ModifyTypeFunctionAdd"
#define VALUE_MODIFY_TYPE_FD            "ModifyTypeFunctionRemove"
#define VALUE_ISSUE_NUMBER				"IssueNumber"
#define VALUE_SUMMARY					"Summary"
#define VALUE_SIGNATURE_CHECKED			"SignatureChecked"
#define VALUE_SIGNATURE_AUTHOR			"SignatureAuthor"
#define VALUE_SIGNATURE_DATE			"SignatureDate"
#define VALUE_SIGNATURE_SERIAL_NUM		"SignatureSerialNumber"
#define VALUE_DESCRIPTION				"Description"
#define VALUE_TEST_CASE					"TestCase"
#define VALUE_MODIFY_FILES				"ModifyFiles"

#define FORM_LOCATION_VALUE			    "FormLocationV"
#define FORM_LOCATION_X_VALUE			"FormLocationXV"
#define FORM_LOCATION_Y_VALUE			"FormLocationYV"

#define PROJECT_NAME_KEY				"ProjectName"
#define MAX_PROJECT_NAME_SAVED				5

	//
	// Saved Form Layout
	//
	private: System::Drawing::Point formLocation;

		   //
   // subroutins
   //
	private: System::Void SaveComboSettings(RegistryKey^ appKey, String^ keyName, System::Windows::Forms::ComboBox^ comboBox) {
		String^ keyNameIndex = keyName + "_Index";
		RegistryKey^ subKey = appKey->OpenSubKey(keyName, true);
		if (subKey != nullptr) {
			appKey->DeleteSubKeyTree(keyName);
		}
		subKey = appKey->CreateSubKey(keyName);
		for (int i = 0; i < comboBox->Items->Count && i < MAX_PROJECT_NAME_SAVED; i++) {
			comboBox->SelectedIndex = i;
			subKey->SetValue(i.ToString(), comboBox->Text);
		}
	}

	private: System::Void SaveSettings(Void) {
		RegistryKey^ appKey = Registry::CurrentUser->CreateSubKey("Software\\" + COMPANY_NAME + "\\" + APP_KEY);

		appKey->SetValue(VALUE_MESSAGE_TYPE_TAG,		radioButtonTag->Checked);
		appKey->SetValue(VALUE_MESSAGE_TYPE_MARK,       radioButtonMark->Checked);
		appKey->SetValue(VALUE_MESSAGE_TYPE_MESSAGE,	radioButtonMessage->Checked);
		appKey->SetValue(VALUE_BIOS_TYPE_CRB,			radioButtonCrb->Checked);
		appKey->SetValue(VALUE_BIOS_TYPE_STANDARD,      radioButtonCrb->Checked);
		appKey->SetValue(VALUE_BIOS_TYPE_CUSTOMIZED,    radioButtonCustomized->Checked);
		appKey->SetValue(VALUE_PROJECT_NAME,            comboBoxProjectName->Text);
		appKey->SetValue(VALUE_CUSTOMER_NAME,           textBoxCustomerName);
		appKey->SetValue(VALUE_BIOS_VERSION,            textBoxBiosVersion);
		appKey->SetValue(VALUE_MODIFY_TYPE_BF,			radioButtonBugFix->Checked );
		appKey->SetValue(VALUE_MODIFY_TYPE_FA,			radioButtonFunctionAdd->Checked);
		appKey->SetValue(VALUE_MODIFY_TYPE_FD,			radioButtonFunctionRemove->Checked);
		appKey->SetValue(VALUE_ISSUE_NUMBER,			textBoxIssueNumber->Text);
		appKey->SetValue(VALUE_SUMMARY,					textBoxSummary->Text);
		appKey->SetValue(VALUE_SIGNATURE_CHECKED,		checkBoxSignature->Checked);
		appKey->SetValue(VALUE_SIGNATURE_AUTHOR,		textBoxAuthor->Text);
		appKey->SetValue(VALUE_SIGNATURE_DATE,			textBoxDate->Text);
		appKey->SetValue(VALUE_SIGNATURE_SERIAL_NUM,	textBoxSerialNumber->Text);
		appKey->SetValue(VALUE_DESCRIPTION,				textBoxDescription->Text);
		appKey->SetValue(VALUE_TEST_CASE,				textBoxTestCase->Text);
		appKey->SetValue(VALUE_MODIFY_FILES,			textBoxModifyFiles->Text);
		//
		// Save comboBox Lists
		// 
		SaveComboSettings(appKey, PROJECT_NAME_KEY, comboBoxProjectName);
		//
		// Save form layout
		//
		//appKey->SetValue(FORM_LOCATION_X_VALUE, formLocation.X);
		//appKey->SetValue(FORM_LOCATION_Y_VALUE, formLocation.Y);
		appKey->SetValue(FORM_LOCATION_VALUE, this->Location);
		//
		// Save Category List File Name
		//
		//appKey->SetValue(VALUE_CATEGORY_LIST_FILE, fileCategory);
	}

	private: System::Void RestoreComboSettings(RegistryKey^ appKey, String^ keyName, System::Windows::Forms::ComboBox^ comboBox) {
		RegistryKey^ subKey = appKey->OpenSubKey(keyName);
		if (subKey != nullptr) {
			for (int i = 0; i < MAX_PROJECT_NAME_SAVED; i++) {
				String^ PathName = (String^)subKey->GetValue(i.ToString());
				if (String::IsNullOrEmpty(PathName)) break;
				comboBox->Items->Add(PathName);
			}
		}
	}

	private: System::Void RestoreSettings(Void) {
		//
		// Retrieve Registry keys
		//
		RegistryKey^ appKey = Registry::CurrentUser->OpenSubKey("Software\\" + COMPANY_NAME + "\\" + APP_KEY);
		if (appKey == nullptr) {
			Registry::SetValue("HKEY_CURRENT_USER\\Software\\" + COMPANY_NAME + "\\" + APP_KEY, APP_VERSION_VALUE, APP_REGISTRY_VERSION);
			return;
		}
		String^ Str = (String^)appKey->GetValue(APP_VERSION_VALUE, "0.0");
		if (String::Compare(APP_REGISTRY_VERSION, Str) != 0) {
			RegistryKey^ appFamilyKey = Registry::CurrentUser->OpenSubKey("Software\\" + COMPANY_NAME, true);
			appFamilyKey->DeleteSubKeyTree(APP_KEY);
			Registry::SetValue("HKEY_CURRENT_USER\\Software\\" + COMPANY_NAME + "\\" + APP_KEY, APP_VERSION_VALUE, APP_REGISTRY_VERSION);
			return;
		}

		//
		// Restore comboBox Lists
		//
		RestoreComboSettings(appKey, PROJECT_NAME_KEY, comboBoxProjectName);
		//
		// Restore Contexts
		//
		radioButtonTag->Checked = Convert::ToBoolean( appKey->GetValue(VALUE_MESSAGE_TYPE_TAG, "") );
		radioButtonMark->Checked = Convert::ToBoolean( appKey->GetValue(VALUE_MESSAGE_TYPE_MARK, "") );
		radioButtonMessage->Checked = Convert::ToBoolean( appKey->GetValue(VALUE_MESSAGE_TYPE_MESSAGE, "") );
		radioButtonCrb->Checked = Convert::ToBoolean( appKey->GetValue(VALUE_BIOS_TYPE_CRB, "") );
		radioButtonCrb->Checked = Convert::ToBoolean( appKey->GetValue(VALUE_BIOS_TYPE_STANDARD, "") );
		radioButtonCustomized->Checked = Convert::ToBoolean( appKey->GetValue(VALUE_BIOS_TYPE_CUSTOMIZED, "") );
		comboBoxProjectName->Text = (String^) appKey->GetValue(VALUE_PROJECT_NAME, "");
		textBoxCustomerName->Text = (String^)appKey->GetValue(VALUE_CUSTOMER_NAME, "");
		textBoxBiosVersion->Text = (String^)appKey->GetValue(VALUE_BIOS_VERSION, "");
		radioButtonBugFix->Checked = Convert::ToBoolean( appKey->GetValue(VALUE_MODIFY_TYPE_BF, "") );
		radioButtonFunctionAdd->Checked = Convert::ToBoolean( appKey->GetValue(VALUE_MODIFY_TYPE_FA, "") );
		radioButtonFunctionRemove->Checked = Convert::ToBoolean( appKey->GetValue(VALUE_MODIFY_TYPE_FD, "") );
		textBoxIssueNumber->Text = (String^) appKey->GetValue(VALUE_ISSUE_NUMBER, "");
		textBoxSummary->Text = (String^) appKey->GetValue(VALUE_SUMMARY, "");
		checkBoxSignature->Checked = Convert::ToBoolean(appKey->GetValue(VALUE_SIGNATURE_CHECKED, ""));
		textBoxAuthor->Text = (String^) appKey->GetValue(VALUE_SIGNATURE_AUTHOR, "");
		textBoxDate->Text = (String^) appKey->GetValue(VALUE_SIGNATURE_DATE, "");
		textBoxSerialNumber->Text = (String^)appKey->GetValue(VALUE_SIGNATURE_SERIAL_NUM, "");
		textBoxDescription->Text = (String^) appKey->GetValue(VALUE_DESCRIPTION, "");
		textBoxTestCase->Text = (String^) appKey->GetValue(VALUE_TEST_CASE, "");
		textBoxModifyFiles->Text = (String^)appKey->GetValue(VALUE_MODIFY_FILES, "");
		//
		// Restore form layout
		//
		//formLocation.X = (Int32)appKey->GetValue(FORM_LOCATION_X_VALUE, this->Location.X);
		//formLocation.Y = (Int32)appKey->GetValue(FORM_LOCATION_Y_VALUE, this->Location.Y);
		formLocation = (System::Drawing::Point)appKey->GetValue(FORM_LOCATION_X_VALUE, this->Location);
	}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Location = System::Drawing::Point(formLocation);
		//this->pictureBoxAdlinkLogo->Image = Image::FromFile("ADLINK_logo_0415_2.png");
		EnableControls();
	}

	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		System::Diagnostics::Process::Start("http://tpdc-km.adlinktech.com:8090/pages/viewpage.action?pageId=21037656");
	}

	private: System::Void EnableControls(Void) {
		this->groupBoxBiosType->Enabled = this->radioButtonTag->Checked;

		//		this->comboBoxProjectName->Enabled = !(this->radioButtonTag->Checked && this->radioButtonCrb->Checked) && !(this->radioButtonMark->Checked);
		this->comboBoxProjectName->Enabled = !(this->radioButtonTag->Checked && this->radioButtonCrb->Checked);
		this->textBoxCustomerName->Enabled = this-> radioButtonCustomized->Checked && !(this->radioButtonMark->Checked) && !(this->radioButtonMessage->Checked);
		this->textBoxBiosVersion->Enabled = !(this->radioButtonMark->Checked) && !(this->radioButtonMessage->Checked);

		this->groupBoxModification->Enabled = this->radioButtonMessage->Checked || this->radioButtonMark->Checked;

		this->textBoxIssueNumber->Enabled = this->radioButtonMessage->Checked;
		this->textBoxSummary->Enabled = this->radioButtonMessage->Checked || this->radioButtonMark->Checked;

		this->groupBoxSignature->Enabled = this->radioButtonMessage->Checked;

		this->textBoxDescription->Enabled = this->radioButtonMessage->Checked;
		this->textBoxTestCase->Enabled = this->radioButtonMessage->Checked;
		this->textBoxModifyFiles->Enabled = this->radioButtonMessage->Checked;

		this->groupBoxSignature->Enabled = this->checkBoxSignature->Checked;
	}
	private: System::Void radioButtonTag_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		EnableControls();
	}
	private: System::Void radioButtonMark_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		EnableControls();
	}
	private: System::Void radioButtonMessage_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		EnableControls();
	}
	private: System::Void radioButtonCrb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		EnableControls();
	}
	private: System::Void radioButtonStandard_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		EnableControls();
	}
	private: System::Void radioButtonCustomized_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		EnableControls();
	}

	private: System::String^ exportLog() {
		String^ strLog = "";

		if (this->comboBoxProjectName->Enabled) {
			if (this->radioButtonTag->Checked) {
				strLog = comboBoxProjectName->Text + "_";
			}
			else {
				strLog = "[" + comboBoxProjectName->Text + "]";
			}
		}
		if (this->textBoxCustomerName->Enabled) {
			strLog = strLog + textBoxCustomerName->Text + "_";
		}
		if (this->textBoxBiosVersion->Enabled) {
			strLog = strLog + textBoxBiosVersion->Text;
		}

		if (this->groupBoxModification->Enabled) {
			if (this->radioButtonBugFix->Checked) {
				strLog = strLog + "[B]";
			}
			if (this->radioButtonFunctionAdd->Checked) {
				strLog = strLog + "[FA]";
			}
			if (this->radioButtonFunctionRemove->Checked) {
				strLog = strLog + "[FD]";
			}
		}

		if (this->textBoxIssueNumber->Enabled) {
			if (!(System::String::IsNullOrEmpty(textBoxIssueNumber->Text))) {
				strLog = strLog + "Fix Jira:" + textBoxIssueNumber->Text;
			}
		}
		if (this->textBoxSummary->Enabled) {
			strLog = strLog + " " +textBoxSummary->Text;
		}

		if (this->groupBoxSignature->Enabled) {
			strLog = strLog + "\r\n\r\nSignature:";
			if (!(System::String::IsNullOrEmpty(groupBoxSignature->Text))) {
				strLog = strLog + " <ADLINK-" + textBoxAuthor->Text + textBoxDate->Text + "_" + textBoxSerialNumber->Text + ">";
			}
		}
		if (this->textBoxDescription->Enabled) {
			strLog = strLog + "\r\n\r\nDescription:";
			if (!(System::String::IsNullOrEmpty(textBoxDescription->Text))) {
				strLog = strLog + "\r\n  " + textBoxDescription->Text->Replace("\r\n", "\r\n  ");
			}
		}
		if (this->textBoxTestCase->Enabled) {
			strLog = strLog + "\r\n\r\nTest Case:";
			if (!(System::String::IsNullOrEmpty(textBoxTestCase->Text))) {
				strLog = strLog + "\r\n  " + textBoxTestCase->Text->Replace("\r\n", "\r\n  ");
			}
		}
		if (this->textBoxModifyFiles->Enabled) {
			strLog = strLog + "\r\n\r\nModify Files:";
			if (!(System::String::IsNullOrEmpty(textBoxModifyFiles->Text))) {
				strLog = strLog + "\r\n  " + textBoxModifyFiles->Text->Replace("\r\n", "\r\n  ");
			}
		}
		//
		// Convert to ASCII code
		//
		Encoding^ ascii = Encoding::ASCII;
		Encoding^ unicode = Encoding::Unicode;
		array<Byte>^ unicodeBytes = unicode->GetBytes(strLog);
		array<Byte>^ asciiBytes = Encoding::Convert(unicode, ascii, unicodeBytes);
		array<Char>^ asciiChars = gcnew array<Char>(ascii->GetCharCount(asciiBytes, 0, asciiBytes->Length));
		ascii->GetChars(asciiBytes, 0, asciiBytes->Length, asciiChars, 0);
		String^ asciiString = gcnew String(asciiChars);
		//
		// return converted string
		//
		return asciiString;
	}


	private: System::Void UpdateComboBox(System::Windows::Forms::ComboBox^ comboBox, String^ str, bool insert) {
		int index;
		if (insert) {
			index = comboBox->FindStringExact(str);
		}
		else {
			index = comboBox->FindString(str);
		}
		if (index == -1) {
			if (insert) {
				comboBox->Items->Insert(0, str);
				comboBox->SelectedIndex = 0;
			}
			else {
				comboBox->Text = "";
			}
		}
		else {
			comboBox->SelectedIndex = index;
			comboBox->Items->Insert(0, comboBox->SelectedItem);
			comboBox->Items->RemoveAt(comboBox->SelectedIndex);
			comboBox->SelectedIndex = 0;
		}
	}

	private: System::Void buttonClipboard_Click(System::Object^ sender, System::EventArgs^ e) {
		Clipboard::SetDataObject(exportLog());
		//
		// Sound
		//
		SystemSounds::Asterisk->Play();
		MessageBox::Show("Copy to Clipboard done!");
	}

	private: System::Void textBoxBiosVersion_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButtonCrb->Checked) {
			if (this->textBoxBiosVersion->Text->Length >= 4) {
				if (String::Compare(this->textBoxBiosVersion->Text->Substring(0, 4), "CRB_") != 0) {
					this->textBoxBiosVersion->Text = "CRB_" + this->textBoxBiosVersion->Text;
				}
			}
			else {
				this->textBoxBiosVersion->Text = "CRB_" + this->textBoxBiosVersion->Text;
			}
		}
	}

	private: System::Void textBoxAuthor_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBoxDate_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->checkBoxSignature->Text = "<ADLINK-" + textBoxAuthor->Text + textBoxDate->Text + "_" + textBoxSerialNumber->Text + ">";
	}
	private: System::Void textBoxSerialNumber_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->checkBoxSignature->Text = "<ADLINK-" + textBoxAuthor->Text + textBoxDate->Text + "_" + textBoxSerialNumber->Text + ">";
	}
	private: System::Void textBoxAuthor_Leave(System::Object^ sender, System::EventArgs^ e) {
		this->textBoxAuthor->Text = this->textBoxAuthor->Text->ToUpper();
		this->checkBoxSignature->Text = "<ADLINK-" + textBoxAuthor->Text + textBoxDate->Text + "_" + textBoxSerialNumber->Text + ">";
	}
	private: System::Void Form1_LocationChanged(System::Object^ sender, System::EventArgs^ e) {
		formLocation = this->Location;
	}
	private: System::Void buttonToday_Click(System::Object^ sender, System::EventArgs^ e) {
		DateTime localDate = DateTime::Now;
		this->textBoxDate->Text = localDate.Year.ToString("0000") + localDate.Month.ToString("00") + localDate.Day.ToString("00");
	}
	private: System::Void buttonExport_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ strIssue = this->textBoxIssueNumber->Text;
		String^ FileName = strIssue + ".txt";

		if (folderBrowserDialog1->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
		FileName = Path::Combine(folderBrowserDialog1->SelectedPath, FileName);
		StreamWriter^ dout = gcnew StreamWriter(FileName, false, System::Text::Encoding::ASCII);
		dout->WriteLine(exportLog());
		dout->Close();
		//
		// Sound
		//
		SystemSounds::Asterisk->Play();
		MessageBox::Show("Export to " + Path::GetFileName(FileName) + " done!");
	}
	private: System::Void pictureBoxAdlinkLogo_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Diagnostics::Process::Start("http://tpdc-km.adlinktech.com:8090/pages/viewpage.action?pageId=21037656");
	}
	private: System::Void comboBoxProjectName_Leave(System::Object^ sender, System::EventArgs^ e) {
		UpdateComboBox(comboBoxProjectName, comboBoxProjectName->Text, true);
	}
	private: System::Void checkBoxSignature_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->groupBoxSignature->Enabled = this->checkBoxSignature->Checked;
	}
};
}
