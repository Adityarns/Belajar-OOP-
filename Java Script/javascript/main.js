class Player {
  namaSekolah = "SMAN 25 Bandung";
  constructor(nama, kelas) {
    console.log(`nama ${nama}`);
    this.nama = nama;
    this.kelas = kelas;
  }

  halo() {
    document.write(
      `Halo dek nama saya ${this.nama}\nSaya dari kelas ${this.kelas} `
    );
  }
}

let Player1 = new Player("Adit", "12.3");
Player1.halo();
