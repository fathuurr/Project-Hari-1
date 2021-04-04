<?php
include "Nilai.php";
$grade = new Student;

?>
<!DOCTYPE html>
 <html>
<head>
	<title></title>
</head>
<body>
	
	<form action="" method="GET">
		<input type="text" name="nilai">
		<input type="submit" name="cek">
	</form>

	<?php

	if(isset($_GET["cek"])){

		$ponten=$grade->setNama($_GET["nilai"]);
		echo $grade->getNilai();
	
	}

	?>


</body>
</html>