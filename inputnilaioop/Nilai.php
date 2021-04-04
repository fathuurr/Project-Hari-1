<?php

class Student {

	var $nama;
	var $nilai;


	function setNama($nl) {
		$this->nilai=$nl;
	}


	function getNilai(){

		if($this->nilai<=100 && $this->nilai>=81){

			$jumlah ='A';
            }
			else if ($this->nilai<=80 && $this->nilai>=71) {
				$jumlah = 'B';
			} 

			else if ($this->nilai<=70 && $this->nilai>=61) {
				$jumlah = 'C';
			} 

			else if ($this->nilai<=80 && $this->nilai>=71) {
				$jumlah = 'B';
			} 

			else {

				$jumlah = 'Remedial';
			}
		
			return $jumlah;
	}
}



?>