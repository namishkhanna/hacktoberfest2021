<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>simple gallery</title>
    <link rel = "icon" href = "https://img-premium.flaticon.com/png/512/1806/premium/1806197.png?token=exp=1632415618~hmac=7bd5e17a3372380808f769eab4f8066f"
        type = "image/x-icon">

    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.7/umd/popper.min.js"></script>
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js"></script>
</head>

<style>
    @import url('https://fonts.googleapis.com/css2?family=Poppins:wght@300;500&display=swap');

    *{
    font-family: 'Poppins', sans-serif;
    text-align: center;
}
</style>
<body>
    <div class="container" style="margin-top: 2rem;">
        <h2>Gallery</h2>
        <br>
        <div class="row">
            <?php
                for($i = 0; $i <4; $i++){
                    echo "<div class='col-3'>";
                    $widthSC = rand(5,10);
                    for($j = 0; $j < $widthSC; $j++){
                        $img = rand(250, 650);
                        echo "<img class='w-100 my-2 rounded' src='https://picsum.photos/200/$img'/>";
                    }
                    echo "</div>";
                }
            ?>
        </div>
    </div>
</body>
</html>
