#pragma once
#include "Connexion.h"
#include "MapCommande.h"
#include "GestionCommande.h"

namespace fenetreArticle {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AjouterArticle
	/// </summary>
	public ref class AjouterArticle : public System::Windows::Forms::Form
	{
	public:
		AjouterArticle(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~AjouterArticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: connexion^ cad;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(139, 92);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &AjouterArticle::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(139, 184);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &AjouterArticle::comboBox2_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(139, 256);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ajouter Article";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AjouterArticle::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(147, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Id Article";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(147, 168);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nom Article";
			this->cad = gcnew connexion();
			comboBox1->BeginUpdate();
			comboBox2->BeginUpdate();
			this->cad = gcnew connexion("SELECT COUNT(*) FROM Article", 7);
			int tes = cad->GetIDINT() + 1;
			int id = 0;
			for (int i = 1; i < tes; i++)
			{
				id++;
				this->cad = gcnew connexion("select * from Article WHERE Id_article=" + id + "", 8);
				if (this->cad->GetNom() == this->cad->GetID()) {
					i--;
				}
				else {
					comboBox2->Items->Add(this->cad->GetNom());
					comboBox1->Items->Add(this->cad->GetID());
				}
			}
			comboBox1->EndUpdate();
			comboBox2->EndUpdate();
			// 
			// AjouterArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(434, 333);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Name = L"AjouterArticle";
			this->Text = L"AjouterArticle";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Article id
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		int selectedIndex = comboBox1->SelectedIndex;
		Object^ selectedItem = comboBox1->SelectedItem;
		comboBox2->SelectedIndex = selectedIndex;
	}

		   //Article nom
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int selectedIndex = comboBox2->SelectedIndex;
	Object^ selectedItem = comboBox2->SelectedItem;
	comboBox1->SelectedIndex = selectedIndex;
}

	   //button Ajouter
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Object^ selectedItem1 = comboBox1->SelectedItem;
	String^ article = selectedItem1->ToString();
	int id_article = Int32::Parse(article);
	Service::GestionCommande^ GestionCommande1 = gcnew Service::GestionCommande();
	GestionCommande1->AjouterArticle(id_article);

}
};
}
