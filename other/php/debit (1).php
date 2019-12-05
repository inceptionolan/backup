<?php
    if(!isset($_GET["sbtBtn"]))
    {
        header("location:infopage.html");
    }
?>


<!DOCTYPE html>
<html lang="en">
<head>
    <title>Document</title>
</head>
<body>
<?php
    $x=5000;
    $y = $_GET["dentAmt"];
    $z=$x-$y;
    echo "Updated Balance is : $z";
    ?>

</body>
</html>