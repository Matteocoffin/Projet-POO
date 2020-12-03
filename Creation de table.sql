CREATE TABLE Adresse(
        Id_adresse Int  not null identity(1,1) primary key ,
        Adresse    Varchar (50) NOT NULL ,
        Ville       Varchar (50) NOT NULL ,
        Cp         Varchar (50) NOT NULL
);




CREATE TABLE Date(
        Id_date Int  not null identity(1,1) primary key  ,
        Date    Varchar (50) NOT NULL
);




CREATE TABLE Article(
        Id_article      Int  not null identity(1,1) primary key  ,
        Nom_article     Varchar (50) NOT NULL ,
        Quantite_nature Int NOT NULL
);




CREATE TABLE Catalogue(
        Id_catalogue        Int  not null identity(1,1) primary key  ,
        Prix_HT             Int NOT NULL ,
        Quantite_stock      Int NOT NULL ,
        Seuil_reapprovision Int NOT NULL ,
        Taux_TVA            float NOT NULL ,
        Id_article          Int NOT NULL
);




CREATE TABLE Facture(
        Id_facture  Int  not null identity(1,1) primary key ,
        Nom_societe Varchar (50) NOT NULL

);



CREATE TABLE Personnel(
        Id_personnel        Int  not null identity(1,1) primary key ,
        Nom_personnel       Varchar (50) NOT NULL ,
        Prenom_personnel    Varchar (50) NOT NULL ,
        Date_embauche       Date NOT NULL ,
        Id_personnel_Dirige Int NULL
);




CREATE TABLE Client(
        Id_client         Int  not null identity(1,1) primary key ,
        Nom_client        Varchar (50) NOT NULL ,
        Prenom_client     Varchar (50) NOT NULL ,
        Date_anniversaire Date NOT NULL ,
        Id_personnel      Int NULL

);




CREATE TABLE Commande(
        Id_commande        Int  not null identity(1,1) primary key ,
        Reference_commande Varchar (50) NOT NULL ,
        Total_article      Int NULL ,
        Total_HT           Int NULL ,
        Total_TVA          Int NULL ,
        Total_TTC          Int NULL ,
        Paiement           varchar(50) NOT NULL,
        Id_client          Int NOT NULL ,
        Id_paiement        Int NOT NULL ,
        Id_date            Int NOT NULL ,
        Id_date_Envoyer    Int NOT NULL ,
        Id_date_Durer      Int NOT NULL ,
        Id_facture         Int NOT NULL
	
);




CREATE TABLE AdresseClient(
        Id_adresse Int NOT NULL ,
        Id_client  Int NOT NULL
	,CONSTRAINT Possede_PK PRIMARY KEY (Id_adresse,Id_client)
);




CREATE TABLE AdresseFacturer(
        Id_client  Int NOT NULL ,
        Id_adresse Int NOT NULL
	,CONSTRAINT Facturer_PK PRIMARY KEY (Id_client,Id_adresse)
);




CREATE TABLE Article_commande(
        Id_commande Int NOT NULL ,
        Id_article  Int NOT NULL
	,CONSTRAINT avoir_PK PRIMARY KEY (Id_commande,Id_article)
);




CREATE TABLE date_Payer(
        Id_commande Int NOT NULL ,
        Id_date     Int NOT NULL
	,CONSTRAINT Payer_PK PRIMARY KEY (Id_commande,Id_date)
);




CREATE TABLE AdressePersonnel(
        Id_personnel Int NOT NULL ,
        Id_adresse   Int NOT NULL
	,CONSTRAINT Detenir_PK PRIMARY KEY (Id_personnel,Id_adresse)
);




ALTER TABLE Catalogue
	ADD CONSTRAINT Catalogue_Article0_FK
	FOREIGN KEY (Id_article)
	REFERENCES Article(Id_article);

ALTER TABLE Personnel
	ADD CONSTRAINT Personnel_Personnel0_FK
	FOREIGN KEY (Id_personnel_Dirige)
	REFERENCES Personnel(Id_personnel);

ALTER TABLE Client
	ADD CONSTRAINT Client_Personnel0_FK
	FOREIGN KEY (Id_personnel)
	REFERENCES Personnel(Id_personnel);

ALTER TABLE Commande
	ADD CONSTRAINT Commande_Client0_FK
	FOREIGN KEY (Id_client)
	REFERENCES Client(Id_client);

ALTER TABLE Commande
	ADD CONSTRAINT Commande_Date2_FK
	FOREIGN KEY (Id_date)
	REFERENCES Date(Id_date);

ALTER TABLE Commande
	ADD CONSTRAINT Commande_Date3_FK
	FOREIGN KEY (Id_date_Envoyer)
	REFERENCES Date(Id_date);

ALTER TABLE Commande
	ADD CONSTRAINT Commande_Date4_FK
	FOREIGN KEY (Id_date_Durer)
	REFERENCES Date(Id_date);

ALTER TABLE Commande
	ADD CONSTRAINT Commande_Facture5_FK
	FOREIGN KEY (Id_facture)
	REFERENCES Facture(Id_facture);

ALTER TABLE AdresseClient
	ADD CONSTRAINT Possede_Adresse0_FK
	FOREIGN KEY (Id_adresse)
	REFERENCES Adresse(Id_adresse);

ALTER TABLE AdresseClient
	ADD CONSTRAINT Possede_Client1_FK
	FOREIGN KEY (Id_client)
	REFERENCES Client(Id_client);

ALTER TABLE AdresseFacturer
	ADD CONSTRAINT Facturer_Client0_FK
	FOREIGN KEY (Id_client)
	REFERENCES Client(Id_client);

ALTER TABLE AdresseFacturer
	ADD CONSTRAINT Facturer_Adresse1_FK
	FOREIGN KEY (Id_adresse)
	REFERENCES Adresse(Id_adresse);

ALTER TABLE Article_commande
	ADD CONSTRAINT avoir_Commande0_FK
	FOREIGN KEY (Id_commande)
	REFERENCES Commande(Id_commande);

ALTER TABLE Article_commande
	ADD CONSTRAINT avoir_Article1_FK
	FOREIGN KEY (Id_article)
	REFERENCES Article(Id_article);

ALTER TABLE date_Payer
	ADD CONSTRAINT Payer_Commande0_FK
	FOREIGN KEY (Id_commande)
	REFERENCES Commande(Id_commande);

ALTER TABLE date_Payer
	ADD CONSTRAINT Payer_Date1_FK
	FOREIGN KEY (Id_date)
	REFERENCES Date(Id_date);

ALTER TABLE AdressePersonnel
	ADD CONSTRAINT Detenir_Personnel0_FK
	FOREIGN KEY (Id_personnel)
	REFERENCES Personnel(Id_personnel);

ALTER TABLE AdressePersonnel
	ADD CONSTRAINT Detenir_Adresse1_FK
	FOREIGN KEY (Id_adresse)
	REFERENCES Adresse(Id_adresse);